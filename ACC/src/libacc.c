/*
 * ASPECT-ORIENTED C (ACC) - an aspect-oriented extension for the C language
 *
 * Copyright (C) 2006 . All rights reserved.
 *
 * Weigang (Michael) Gong, Hans-Arno-Jacobsen
 *
 * ACC development team (www.aspectc.net),
 * Middleware Systems Research Group (www.msrg.utoronto.ca),
 * University of Toronto.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#include <assert.h>
#include <stdlib.h>
#include "utac_tag.h"

struct JoinPoint {
	void** (*fp) (struct JoinPoint *);
	void ** args;
	int argsCount;
	const char ** argsType;
	void * (*arg)(int, struct JoinPoint *);
	const char * (*argType)(int , struct JoinPoint *);
	void ** retValue;
	const char * retType;
	const char * funcName ;
	const char * targetName ;
	const char * fileName ;
	const char * kind ;
	void * excep_return ;
};

struct __UTAC__EXCEPTION {
	void * jumpbuf ;
	unsigned long long int prtValue;
	int pops;
	struct __UTAC__CFLOW_FUNC {
		int (*func)(int,int) ;
		int val ;
		struct __UTAC__CFLOW_FUNC * next;
	} * cflowfuncs;
};


void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val) {
        struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)exception;
        struct __UTAC__CFLOW_FUNC * cf = (struct __UTAC__CFLOW_FUNC *)malloc(sizeof(struct __UTAC__CFLOW_FUNC));;

	cf->func = cflow_func;
        cf->val = val;
        cf->next = excep->cflowfuncs;
        excep->cflowfuncs = cf;

}


void __utac__exception__cf_handler_free(void * exception) {
        struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)exception;
        struct __UTAC__CFLOW_FUNC * cf = excep->cflowfuncs;
        struct __UTAC__CFLOW_FUNC * tmp;

	while(cf != 0) {
        	tmp = cf;
        	cf = cf->next;
        	free(tmp);
        }

	excep->cflowfuncs = 0 ;
}


void __utac__exception__cf_handler_reset(void * exception) {
        struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)exception;
        struct __UTAC__CFLOW_FUNC * cf = excep->cflowfuncs;
        struct __UTAC__CFLOW_FUNC * tmp;

        while(cf != 0) {
        	(*cf->func)(CFLOWSETLEVEL, cf->val);
        	cf = cf->next;
	}

	__utac__exception__cf_handler_free(exception);
}


struct __ACC__ERR {
	void * v;
	struct __ACC__ERR * next;
};


void * __utac__error_stack_mgt(void * env , int mode, int count) {
        static struct __ACC__ERR * head = 0;

        if(count == 0)
		return;


        if(mode == ERRSTACK_PUSH) {
        	struct __ACC__ERR * new = (struct __ACC__ERR *)malloc(sizeof(struct __ACC__ERR));
        	new->v = env;
		new->next = head;
		head=new;
		return (void *)new;
	}

        if(mode == ERRSTACK_POP) {
        	struct __ACC__ERR * temp = head;
        	struct __ACC__ERR * next;
        	void * excep;
        	while(count > 1) {
			next = temp->next;
			excep = temp->v;
        		free(temp);
        		__utac__exception__cf_handler_reset(excep);
        		temp = next ;
			count -- ;
		}

		head = temp->next;
		excep = temp->v;
		free(temp);
        	__utac__exception__cf_handler_reset(excep);
        	return excep;
	}

        if(mode == ERRSTACK_TOP) {
        	if(head)
			return head->v ;
		else
			return 0;
	}
}

void * __utac__get_this_arg(int i, struct JoinPoint * this) {
	assert( i > 0 && i <= this->argsCount);

	return this->args[i-1];
}


const char * __utac__get_this_argtype(int i, struct JoinPoint * this) {

	assert(i > 0 && i <= this->argsCount);

	return this->argsType[i-1];
}
