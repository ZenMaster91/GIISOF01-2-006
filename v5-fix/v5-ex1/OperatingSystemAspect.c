
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
	unsigned long long int prtValue ;
	int pops;
	struct __UTAC__CFLOW_FUNC {
		int (*func)(int,int) ;
		int val ;
		struct __UTAC__CFLOW_FUNC * next; 
	} * cflowfuncs; 
}; 


# 1 "OperatingSystem.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "OperatingSystem.c" 
# 1 "OperatingSystem.h" 1
# 1 "ComputerSystem.h" 1
# 1 "Simulator.h" 1
# 8 "ComputerSystem.h" 2
# 1 "ComputerSystemBase.h" 1
# 1 "ComputerSystem.h" 1
# 7 "ComputerSystemBase.h" 2
int ComputerSystem_ObtainProgramList(int , char *([])); 
#line 8 "ComputerSystemBase.h"
void ComputerSystem_DebugMessage(int , char , ...); 
#line 9 "ComputerSystemBase.h"
void ComputerSystem_FillInArrivalTimeQueue(); 
#line 10 "ComputerSystemBase.h"
void ComputerSystem_PrintArrivalTimeQueue(); 
#line 14 "ComputerSystemBase.h"
extern int endSimulationTime; 
#line 15 "ComputerSystemBase.h"
extern int numberOfProgramsInArrivalTimeQueue; 
#line 16 "ComputerSystemBase.h"
extern int arrivalTimeQueue[30]; 
#line 11 "ComputerSystem.h"
void ComputerSystem_PowerOn(int argc, char *argv[]); 
#line 12 "ComputerSystem.h"
void ComputerSystem_PowerOff(); 
# 9 "ComputerSystem.h" 2
# 40 "ComputerSystem.h" 
typedef struct ProgramData {char *executableName; unsigned int arrivalTime; unsigned int type; 
}PROGRAMS_DATA; 
#line 44 "ComputerSystem.h"
extern  PROGRAMS_DATA *programList[30]; 
# 5 "OperatingSystem.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 367 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4
# 391 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long unsigned int size_t; 
# 34 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned char __u_char; 
#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short; 
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int; 
#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long; 
#line 36 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t; 
#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t; 
#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t; 
#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t; 
#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t; 
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t; 
#line 43 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t; 
#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t; 
#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t; 
#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t; 
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned long int __dev_t; 
#line 125 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t; 
#line 127 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t; 
#line 129 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t; 
#line 133 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct {int __val[2]; 
}__fsid_t; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t; 
#line 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t; 
#line 137 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t; 
#line 138 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t; 
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t; 
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t; 
#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t; 
#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void *__timer_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t; 
#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t; 
#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t; 
#line 163 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t; 
#line 166 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t; 
#line 170 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t; 
#line 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t; 
#line 175 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t; 
#line 177 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __off64_t __loff_t; 
#line 182 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __quad_t *__qaddr_t; 
#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char *__caddr_t; 
#line 186 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t; 
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE ; 
#line 48 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE; 
#line 64 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE; 
# 64 "/usr/include/stdio.h" 3 4
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 94 "/usr/include/wchar.h" 3 4
typedef struct {int __count; union {unsigned int __wch; char __wchb[4]; 
}__value; 
}__mbstate_t; 
#line 25 "/usr/include/_G_config.h"
typedef struct { __off_t __pos;  __mbstate_t __state; 
}_G_fpos_t; 
#line 30 "/usr/include/_G_config.h"
typedef struct { __off64_t __pos;  __mbstate_t __state; 
}_G_fpos64_t; 
# 21 "/usr/include/_G_config.h" 2 3 4
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t ; 
#line 144 "/usr/include/libio.h"
struct _IO_FILE ; 
#line 150 "/usr/include/libio.h"
typedef void _IO_lock_t; 
#line 173 "/usr/include/libio.h"
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; 
}; 
#line 182 "/usr/include/libio.h"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
# 173 "/usr/include/libio.h" 3 4
# 241 "/usr/include/libio.h" 3 4
# 307 "/usr/include/libio.h" 3 4
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; 
}; 
#line 310 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE; 
#line 313 "/usr/include/libio.h"
struct _IO_FILE_plus ; 
#line 315 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 316 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 317 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 333 "/usr/include/libio.h"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 342 "/usr/include/libio.h"
typedef  __ssize_t __io_write_fn(void *__cookie, const char *__buf,  size_t __n); 
#line 350 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 353 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie); 
# 333 "/usr/include/libio.h" 3 4
# 385 "/usr/include/libio.h" 3 4
extern int __underflow( _IO_FILE *); 
#line 386 "/usr/include/libio.h"
extern int __uflow( _IO_FILE *); 
#line 387 "/usr/include/libio.h"
extern int __overflow( _IO_FILE *, int ); 
#line 429 "/usr/include/libio.h"
extern int _IO_getc( _IO_FILE *__fp); 
#line 430 "/usr/include/libio.h"
extern int _IO_putc(int __c,  _IO_FILE *__fp); 
#line 431 "/usr/include/libio.h"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 432 "/usr/include/libio.h"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 434 "/usr/include/libio.h"
extern int _IO_peekc_locked( _IO_FILE *__fp); 
#line 440 "/usr/include/libio.h"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 441 "/usr/include/libio.h"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 442 "/usr/include/libio.h"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 429 "/usr/include/libio.h" 3 4
# 460 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 462 "/usr/include/libio.h"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 463 "/usr/include/libio.h"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ); 
#line 464 "/usr/include/libio.h"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ); 
#line 466 "/usr/include/libio.h"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ); 
#line 467 "/usr/include/libio.h"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ); 
#line 469 "/usr/include/libio.h"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 79 "/usr/include/stdio.h"
typedef  __gnuc_va_list va_list; 
# 75 "/usr/include/stdio.h" 2 3 4
# 90 "/usr/include/stdio.h" 3 4
typedef  __off_t off_t; 
#line 102 "/usr/include/stdio.h"
typedef  __ssize_t ssize_t; 
#line 110 "/usr/include/stdio.h"
typedef  _G_fpos_t fpos_t; 
# 102 "/usr/include/stdio.h" 3 4
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 168 "/usr/include/stdio.h" 2 3 4
extern struct _IO_FILE *stdin; 
#line 169 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout; 
#line 170 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr; 
#line 178 "/usr/include/stdio.h"
extern int remove(const char *__filename) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 180 "/usr/include/stdio.h"
extern int rename(const char *__old, const char *__new) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 186 "/usr/include/stdio.h"
extern int renameat(int __oldfd, const char *__old, int __newfd, const char *__new) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 195 "/usr/include/stdio.h"
extern  FILE *tmpfile(void ); 
#line 209 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 215 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 209 "/usr/include/stdio.h" 3 4
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam(const char *__dir, const char *__pfx) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 237 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 242 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 252 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 252 "/usr/include/stdio.h" 3 4
# 273 "/usr/include/stdio.h" 3 4
extern  FILE *fopen(const char *__restrict __filename, const char *__restrict __modes); 
#line 280 "/usr/include/stdio.h"
extern  FILE *freopen(const char *__restrict __filename, const char *__restrict __modes,  FILE *__restrict __stream); 
# 295 "/usr/include/stdio.h" 3 4
# 306 "/usr/include/stdio.h" 3 4
extern  FILE *fdopen(int __fd, const char *__modes) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 320 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, const char *__modes) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__bufloc,  size_t *__sizeloc) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 332 "/usr/include/stdio.h"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/stdio.h"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 344 "/usr/include/stdio.h"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 347 "/usr/include/stdio.h"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 357 "/usr/include/stdio.h"
extern int fprintf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 362 "/usr/include/stdio.h"
extern int printf(const char *__restrict __format, ...); 
#line 365 "/usr/include/stdio.h"
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 372 "/usr/include/stdio.h"
extern int vfprintf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg); 
#line 377 "/usr/include/stdio.h"
extern int vprintf(const char *__restrict __format,  __gnuc_va_list __arg); 
#line 380 "/usr/include/stdio.h"
extern int vsprintf(char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 388 "/usr/include/stdio.h"
extern int snprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 392 "/usr/include/stdio.h"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
# 319 "/usr/include/stdio.h" 3 4
# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 416 "/usr/include/stdio.h"
extern int dprintf(int __fd, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 426 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 431 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...); 
#line 434 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 445 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("""__isoc99_fscanf"); 
#line 447 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...) __asm__ ("""__isoc99_scanf"); 
#line 450 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("""__isoc99_sscanf") __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 443 "/usr/include/stdio.h" 3 4
# 473 "/usr/include/stdio.h" 3 4
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 480 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 485 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 498 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vfscanf") __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 501 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vscanf") __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 506 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vsscanf") __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
# 494 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc( FILE *__stream); 
#line 532 "/usr/include/stdio.h"
extern int getc( FILE *__stream); 
#line 538 "/usr/include/stdio.h"
extern int getchar(void ); 
#line 550 "/usr/include/stdio.h"
extern int getc_unlocked( FILE *__stream); 
#line 551 "/usr/include/stdio.h"
extern int getchar_unlocked(void ); 
# 550 "/usr/include/stdio.h" 3 4
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked( FILE *__stream); 
#line 573 "/usr/include/stdio.h"
extern int fputc(int __c,  FILE *__stream); 
#line 574 "/usr/include/stdio.h"
extern int putc(int __c,  FILE *__stream); 
#line 580 "/usr/include/stdio.h"
extern int putchar(int __c); 
#line 594 "/usr/include/stdio.h"
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 602 "/usr/include/stdio.h"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 603 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c); 
#line 610 "/usr/include/stdio.h"
extern int getw( FILE *__stream); 
#line 613 "/usr/include/stdio.h"
extern int putw(int __w,  FILE *__stream); 
#line 623 "/usr/include/stdio.h"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
# 594 "/usr/include/stdio.h" 3 4
# 640 "/usr/include/stdio.h" 3 4
# 667 "/usr/include/stdio.h" 3 4
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 670 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 680 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 
#line 689 "/usr/include/stdio.h"
extern int fputs(const char *__restrict __s,  FILE *__restrict __stream); 
#line 695 "/usr/include/stdio.h"
extern int puts(const char *__s); 
#line 702 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 710 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 716 "/usr/include/stdio.h"
extern  size_t fwrite(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
#line 738 "/usr/include/stdio.h"
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 740 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 749 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 754 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream); 
#line 759 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
# 737 "/usr/include/stdio.h" 3 4
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 778 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream); 
#line 798 "/usr/include/stdio.h"
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 803 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, const  fpos_t *__pos); 
# 792 "/usr/include/stdio.h" 3 4
# 815 "/usr/include/stdio.h" 3 4
# 826 "/usr/include/stdio.h" 3 4
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 828 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 830 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 835 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 836 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 837 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 846 "/usr/include/stdio.h"
extern void perror(const char *__s); 
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern const char *const sys_errlist[]; 
#line 858 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 863 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 854 "/usr/include/stdio.h" 2 3 4
# 872 "/usr/include/stdio.h" 3 4
extern  FILE *popen(const char *__command, const char *__modes); 
#line 878 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 884 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 912 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 916 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 919 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 912 "/usr/include/stdio.h" 3 4
# 942 "/usr/include/stdio.h" 3 4
# 6 "OperatingSystem.h" 2
# 33 "OperatingSystem.h" 
# 33 "OperatingSystem.h" 
enum ProcessQueues {USERPROCESSQUEUE,DAEMONSQUEUE}; 
#line 39 "OperatingSystem.h"
enum ProgramTypes {USERPROGRAM,DAEMONPROGRAM}; 
#line 42 "OperatingSystem.h"
enum ProcessStates {NEW,READY,EXECUTING,BLOCKED,EXIT}; 
#line 45 "OperatingSystem.h"
enum SystemCallIdentifiers {SYSCALL_END=3,SYSCALL_PRINTEXECPID=5,SYSCALL_YIELD=4,SYSCALL_SLEEP=7}; 
#line 60 "OperatingSystem.h"
typedef struct {int busy; int initialPhysicalAddress; int processSize; int state; int priority; int copyOfPCRegister; unsigned int copyOfPSWRegister; int copyOfAccumulator; int programListIndex; int queueID; int whenToWakeUp; 
}PCB; 
#line 64 "OperatingSystem.h"
extern  PCB processTable[4]; 
#line 65 "OperatingSystem.h"
extern int OS_address_base; 
#line 66 "OperatingSystem.h"
extern int sipID; 
#line 69 "OperatingSystem.h"
void OperatingSystem_Initialize(); 
#line 70 "OperatingSystem.h"
void OperatingSystem_InterruptLogic(int ); 
#line 71 "OperatingSystem.h"
int OperatingSystem_GetExecutingProcessID(); 
# 2 "OperatingSystem.c" 2
# 1 "OperatingSystemBase.h" 1
# 9 "OperatingSystemBase.h" 
int OperatingSystem_ObtainAnEntryInTheProcessTable(); 
#line 10 "OperatingSystemBase.h"
int OperatingSystem_ObtainProgramSize( FILE **, char *); 
#line 11 "OperatingSystemBase.h"
int OperatingSystem_ObtainPriority( FILE *); 
#line 12 "OperatingSystemBase.h"
int OperatingSystem_LoadProgram( FILE *, int , int ); 
#line 13 "OperatingSystemBase.h"
void OperatingSystem_ReadyToShutdown(); 
#line 14 "OperatingSystemBase.h"
void OperatingSystem_ShowTime(char ); 
#line 15 "OperatingSystemBase.h"
void OperatingSystem_PrintStatus(); 
#line 16 "OperatingSystemBase.h"
void OperatingSystem_PrintReadyToRunQueue(); 
#line 17 "OperatingSystemBase.h"
void OperatingSystem_PrepareTeachersDaemons(); 
#line 18 "OperatingSystemBase.h"
int OperatingSystem_IsThereANewProgram(); 
#line 19 "OperatingSystemBase.h"
int OperatingSystem_InitializePartitionTable(); 
#line 20 "OperatingSystemBase.h"
void OperatingSystem_ShowPartitionTable(char *); 
#line 23 "OperatingSystemBase.h"
extern int sleepingProcessesQueue[4]; 
#line 24 "OperatingSystemBase.h"
extern int numberOfSleepingProcesses; 
#line 26 "OperatingSystemBase.h"
extern int baseDaemonsInProgramList; 
#line 34 "OperatingSystemBase.h"
typedef struct {int occupied; int initAddress; int size; int PID; 
}PARTITIONDATA; 
#line 37 "OperatingSystemBase.h"
extern  PARTITIONDATA partitionsTable[4 * 2]; 
# 3 "OperatingSystem.c" 2
# 8 "MMU.h" 1
int MMU_readMemory(); 
#line 9 "MMU.h"
int MMU_writeMemory(); 
#line 11 "MMU.h"
int MMU_GetMAR(); 
#line 12 "MMU.h"
void MMU_SetMAR(int ); 
#line 13 "MMU.h"
void MMU_SetBase(int ); 
#line 14 "MMU.h"
void MMU_SetLimit(int ); 
#line 17 "MMU.h"
int MMU_GetBase(); 
#line 18 "MMU.h"
int MMU_GetLimit(); 
# 4 "OperatingSystem.c" 2
# 1 "Processor.h" 1
# 1 "MainMemory.h" 1
# 11 "MainMemory.h" 
typedef struct {int cell; 
}MEMORYCELL; 
#line 14 "MainMemory.h"
void MainMemory_readMemory(); 
#line 15 "MainMemory.h"
void MainMemory_writeMemory(); 
#line 17 "MainMemory.h"
int MainMemory_GetMAR(); 
#line 18 "MainMemory.h"
void MainMemory_SetMAR(int ); 
#line 19 "MainMemory.h"
void MainMemory_GetMBR( MEMORYCELL *); 
#line 20 "MainMemory.h"
void MainMemory_SetMBR( MEMORYCELL *); 
# 5 "Processor.h" 2
# 4 "ProcessorBase.h" 1
void Processor_UpdatePSW(); 
#line 5 "ProcessorBase.h"
void Processor_CheckOverflow(int , int ); 
#line 7 "ProcessorBase.h"
void Processor_CopyInSystemStack(int , int ); 
#line 8 "ProcessorBase.h"
int Processor_CopyFromSystemStack(int ); 
#line 9 "ProcessorBase.h"
void Processor_RaiseInterrupt(const unsigned int ); 
#line 10 "ProcessorBase.h"
void Processor_ACKInterrupt(const unsigned int ); 
#line 11 "ProcessorBase.h"
unsigned int Processor_GetInterruptLineStatus(const unsigned int ); 
#line 14 "ProcessorBase.h"
void Processor_ActivatePSW_Bit(const unsigned int ); 
#line 15 "ProcessorBase.h"
void Processor_DeactivatePSW_Bit(const unsigned int ); 
#line 16 "ProcessorBase.h"
unsigned int Processor_PSW_BitState(const unsigned int ); 
#line 21 "ProcessorBase.h"
int Processor_GetMAR(); 
#line 22 "ProcessorBase.h"
void Processor_SetMAR(int ); 
#line 23 "ProcessorBase.h"
void Processor_GetMBR( MEMORYCELL *); 
#line 24 "ProcessorBase.h"
void Processor_SetMBR( MEMORYCELL *); 
#line 29 "ProcessorBase.h"
void Processor_SetAccumulator(int ); 
#line 30 "ProcessorBase.h"
int Processor_GetAccumulator(); 
#line 34 "ProcessorBase.h"
void Processor_SetPC(int ); 
#line 38 "ProcessorBase.h"
int Processor_GetRegisterA(); 
#line 42 "ProcessorBase.h"
void Processor_SetPSW(unsigned int ); 
#line 43 "ProcessorBase.h"
unsigned int Processor_GetPSW(); 
#line 45 "ProcessorBase.h"
int Processor_Encode(char , int , int ); 
#line 46 "ProcessorBase.h"
char Processor_DecodeOperationCode( MEMORYCELL ); 
#line 47 "ProcessorBase.h"
int Processor_DecodeOperand1( MEMORYCELL ); 
#line 48 "ProcessorBase.h"
int Processor_DecodeOperand2( MEMORYCELL ); 
#line 49 "ProcessorBase.h"
void Processor_GetCodedInstruction(char *,  MEMORYCELL ); 
#line 13 "Processor.h"
enum PSW_BITS {POWEROFF_BIT=0,ZERO_BIT=1,NEGATIVE_BIT=2,OVERFLOW_BIT=3,EXECUTION_MODE_BIT=7,INTERRUPT_MASKED_BIT=15}; 
#line 16 "Processor.h"
enum EXCEPTIONS {DIVISIONBYZERO,INVALIDPROCESSORMODE,INVALIDADDRESS,INVALIDINSTRUCTION}; 
#line 20 "Processor.h"
enum INT_BITS {SYSCALL_BIT=2,EXCEPTION_BIT=6,IOEND_BIT=8,CLOCKINT_BIT=9}; 
#line 23 "Processor.h"
void Processor_InitializeInterruptVectorTable(); 
#line 24 "Processor.h"
void Processor_InstructionCycleLoop(); 
#line 25 "Processor.h"
void Processor_RaiseInterrupt(const unsigned int ); 
#line 27 "Processor.h"
char *Processor_ShowPSW(); 
#line 28 "Processor.h"
void Processor_RaiseException(int typeOfException); 
#line 29 "Processor.h"
int Processor_GetRegisterB(); 
# 6 "Processor.h" 2
# 5 "OperatingSystem.c" 2
# 4 "Buses.h" 1
enum BusConnection {MAINMEMORY,MMU,CPU,INPUTDEVICE,OUTPUTDEVICE}; 
#line 10 "Buses.h"
int Buses_write_AddressBus_From_To(int , int ); 
#line 11 "Buses.h"
int Buses_write_DataBus_From_To(int , int ); 
# 6 "OperatingSystem.c" 2
# 1 "Heap.h" 1
# 15 "Heap.h" 
int Heap_poll(int ([]), int , int *); 
#line 25 "Heap.h"
int Heap_add(int , int ([]), int , int *, int ); 
#line 32 "Heap.h"
int Heap_compare(int , int , int ); 
#line 34 "Heap.h"
int Heap_getFirst(int ([]), int ); 
# 25 "Heap.h" 
# 7 "OperatingSystem.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy(void *__restrict __dest, const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 47 "/usr/include/string.h"
extern void *memmove(void *__dest, const void *__src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 56 "/usr/include/string.h"
extern void *memccpy(void *__restrict __dest, const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 62 "/usr/include/string.h"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 66 "/usr/include/string.h"
extern int memcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 93 "/usr/include/string.h"
extern void *memchr(const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 92 "/usr/include/string.h" 3 4
# 126 "/usr/include/string.h" 3 4
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 130 "/usr/include/string.h"
extern char *strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 134 "/usr/include/string.h"
extern char *strcat(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 137 "/usr/include/string.h"
extern char *strncat(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 141 "/usr/include/string.h"
extern int strcmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 144 "/usr/include/string.h"
extern int strncmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 148 "/usr/include/string.h"
extern int strcoll(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 152 "/usr/include/string.h"
extern  size_t strxfrm(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 1 "/usr/include/xlocale.h" 1 3 4
# 39 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct {struct __locale_data *__locales[13]; const unsigned short int *__ctype_b; const int *__ctype_tolower; const int *__ctype_toupper; const char *__names[13]; 
}*__locale_t; 
#line 42 "/usr/include/xlocale.h"
typedef  __locale_t locale_t; 
#line 163 "/usr/include/string.h"
extern int strcoll_l(const char *__s1, const char *__s2,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 166 "/usr/include/string.h"
extern  size_t strxfrm_l(char *__dest, const char *__src,  size_t __n,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 172 "/usr/include/string.h"
extern char *strdup(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 180 "/usr/include/string.h"
extern char *strndup(const char *__string,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 160 "/usr/include/string.h" 2 3 4
# 206 "/usr/include/string.h" 3 4
# 232 "/usr/include/string.h" 3 4
extern char *strchr(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 259 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 258 "/usr/include/string.h" 3 4
# 281 "/usr/include/string.h" 3 4
extern  size_t strcspn(const char *__s, const char *__reject) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 285 "/usr/include/string.h"
extern  size_t strspn(const char *__s, const char *__accept) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 311 "/usr/include/string.h"
extern char *strpbrk(const char *__s, const char *__accept) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 310 "/usr/include/string.h" 3 4
# 338 "/usr/include/string.h" 3 4
extern char *strstr(const char *__haystack, const char *__needle) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 344 "/usr/include/string.h"
extern char *strtok(char *__restrict __s, const char *__restrict __delim) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 352 "/usr/include/string.h"
extern char *__strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 356 "/usr/include/string.h"
extern char *strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 395 "/usr/include/string.h"
extern  size_t strlen(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 402 "/usr/include/string.h"
extern  size_t strnlen(const char *__string,  size_t __maxlen) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 408 "/usr/include/string.h"
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 392 "/usr/include/string.h" 3 4
# 424 "/usr/include/string.h" 3 4
extern int strerror_r(int __errnum, char *__buf,  size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 440 "/usr/include/string.h"
extern char *strerror_l(int __errnum,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 446 "/usr/include/string.h"
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 451 "/usr/include/string.h"
extern void bcopy(const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 454 "/usr/include/string.h"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 458 "/usr/include/string.h"
extern int bcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 440 "/usr/include/string.h" 3 4
# 485 "/usr/include/string.h" 3 4
extern char *index(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 513 "/usr/include/string.h"
extern char *rindex(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 518 "/usr/include/string.h"
extern int ffs(int __i) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 512 "/usr/include/string.h" 3 4
# 530 "/usr/include/string.h" 3 4
extern int strcasecmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 534 "/usr/include/string.h"
extern int strncasecmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 554 "/usr/include/string.h"
extern char *strsep(char **__restrict __stringp, const char *__restrict __delim) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 559 "/usr/include/string.h"
extern char *strsignal(int __sig) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 563 "/usr/include/string.h"
extern char *__stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 565 "/usr/include/string.h"
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 571 "/usr/include/string.h"
extern char *__stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 574 "/usr/include/string.h"
extern char *stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 552 "/usr/include/string.h" 3 4
# 658 "/usr/include/string.h" 3 4
# 8 "OperatingSystem.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int __bswap_32(unsigned int __bsx)  
# 835 "OperatingSystemAspect.c"
{
# 837 "OperatingSystemAspect.c"
unsigned int retValue_acc;




# 843 "OperatingSystemAspect.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 848 "OperatingSystemAspect.c"
retValue_acc = __builtin_bswap32(__bsx);
# 850 "OperatingSystemAspect.c"
return (unsigned int )retValue_acc;
 
# 853 "OperatingSystemAspect.c"

}

# 857 "OperatingSystemAspect.c"
return (unsigned int )retValue_acc;

# 860 "OperatingSystemAspect.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 866 "OperatingSystemAspect.c"
{
# 868 "OperatingSystemAspect.c"
__uint64_t retValue_acc;




# 874 "OperatingSystemAspect.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 879 "OperatingSystemAspect.c"
retValue_acc = __builtin_bswap64(__bsx);
# 881 "OperatingSystemAspect.c"
return (__uint64_t )retValue_acc;
 
# 884 "OperatingSystemAspect.c"

}

# 888 "OperatingSystemAspect.c"
return (__uint64_t )retValue_acc;

# 891 "OperatingSystemAspect.c"

}
 
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/ctype.h" 2 3 4
enum {_ISupper=(((0) < 8?((1 << (0)) << 8):((1 << (0)) >> 8))),_ISlower=(((1) < 8?((1 << (1)) << 8):((1 << (1)) >> 8))),_ISalpha=(((2) < 8?((1 << (2)) << 8):((1 << (2)) >> 8))),_ISdigit=(((3) < 8?((1 << (3)) << 8):((1 << (3)) >> 8))),_ISxdigit=(((4) < 8?((1 << (4)) << 8):((1 << (4)) >> 8))),_ISspace=(((5) < 8?((1 << (5)) << 8):((1 << (5)) >> 8))),_ISprint=(((6) < 8?((1 << (6)) << 8):((1 << (6)) >> 8))),_ISgraph=(((7) < 8?((1 << (7)) << 8):((1 << (7)) >> 8))),_ISblank=(((8) < 8?((1 << (8)) << 8):((1 << (8)) >> 8))),_IScntrl=(((9) < 8?((1 << (9)) << 8):((1 << (9)) >> 8))),_ISpunct=(((10) < 8?((1 << (10)) << 8):((1 << (10)) >> 8))),_ISalnum=(((11) < 8?((1 << (11)) << 8):((1 << (11)) >> 8)))}; 
#line 80 "/usr/include/ctype.h"
extern const unsigned short int **__ctype_b_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 82 "/usr/include/ctype.h"
extern const  __int32_t **__ctype_tolower_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 84 "/usr/include/ctype.h"
extern const  __int32_t **__ctype_toupper_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 79 "/usr/include/ctype.h" 3 4
# 110 "/usr/include/ctype.h" 3 4
extern int isalnum(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 111 "/usr/include/ctype.h"
extern int isalpha(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/ctype.h"
extern int iscntrl(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 113 "/usr/include/ctype.h"
extern int isdigit(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 114 "/usr/include/ctype.h"
extern int islower(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/ctype.h"
extern int isgraph(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 116 "/usr/include/ctype.h"
extern int isprint(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 117 "/usr/include/ctype.h"
extern int ispunct(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 118 "/usr/include/ctype.h"
extern int isspace(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 119 "/usr/include/ctype.h"
extern int isupper(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 120 "/usr/include/ctype.h"
extern int isxdigit(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 124 "/usr/include/ctype.h"
extern int tolower(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 127 "/usr/include/ctype.h"
extern int toupper(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 136 "/usr/include/ctype.h"
extern int isblank(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 150 "/usr/include/ctype.h"
extern int isascii(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 154 "/usr/include/ctype.h"
extern int toascii(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 158 "/usr/include/ctype.h"
extern int _toupper(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 159 "/usr/include/ctype.h"
extern int _tolower(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 150 "/usr/include/ctype.h" 3 4
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 272 "/usr/include/ctype.h"
extern int isalpha_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 273 "/usr/include/ctype.h"
extern int iscntrl_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 274 "/usr/include/ctype.h"
extern int isdigit_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 275 "/usr/include/ctype.h"
extern int islower_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 276 "/usr/include/ctype.h"
extern int isgraph_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 277 "/usr/include/ctype.h"
extern int isprint_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 278 "/usr/include/ctype.h"
extern int ispunct_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/ctype.h"
extern int isspace_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 280 "/usr/include/ctype.h"
extern int isupper_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 281 "/usr/include/ctype.h"
extern int isxdigit_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 283 "/usr/include/ctype.h"
extern int isblank_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 287 "/usr/include/ctype.h"
extern int __tolower_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 288 "/usr/include/ctype.h"
extern int tolower_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 291 "/usr/include/ctype.h"
extern int __toupper_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/ctype.h"
extern int toupper_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 347 "/usr/include/ctype.h" 3 4
# 9 "OperatingSystem.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef int wchar_t; 
# 33 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 97 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; 
}__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; 
}__wait_stopped; 
}; 
# 43 "/usr/include/stdlib.h" 2 3 4
# 71 "/usr/include/stdlib.h" 3 4
typedef union {union wait *__uptr; int *__iptr; 
}__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 
#line 101 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; 
}div_t; 
#line 109 "/usr/include/stdlib.h"
typedef struct {long int quot; long int rem; 
}ldiv_t; 
#line 121 "/usr/include/stdlib.h"
 __extension__ typedef struct {long long int quot; long long int rem; 
}lldiv_t; 
# 95 "/usr/include/stdlib.h" 3 4
# 139 "/usr/include/stdlib.h" 3 4
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 145 "/usr/include/stdlib.h"
extern double atof(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 148 "/usr/include/stdlib.h"
extern int atoi(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 151 "/usr/include/stdlib.h"
extern long int atol(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 158 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 166 "/usr/include/stdlib.h"
extern double strtod(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 173 "/usr/include/stdlib.h"
extern float strtof(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 177 "/usr/include/stdlib.h"
extern long double strtold(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/stdlib.h"
extern long int strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 189 "/usr/include/stdlib.h"
extern unsigned long int strtoul(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 197 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 202 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtouq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 211 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 216 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/stdlib.h"
extern char *l64a(long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 309 "/usr/include/stdlib.h"
extern long int a64l(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 305 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __u_char u_char; 
#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_short u_short; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_int u_int; 
#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_long u_long; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __quad_t quad_t; 
#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_quad_t u_quad_t; 
#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsid_t fsid_t; 
#line 44 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __loff_t loff_t; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __ino_t ino_t; 
#line 60 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __dev_t dev_t; 
#line 65 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __gid_t gid_t; 
#line 70 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __mode_t mode_t; 
#line 75 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __nlink_t nlink_t; 
#line 80 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __uid_t uid_t; 
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __pid_t pid_t; 
#line 104 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __id_t id_t; 
#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 116 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 122 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __key_t key_t; 
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef  __clock_t clock_t; 
#line 75 "/usr/include/time.h"
typedef  __time_t time_t; 
# 73 "/usr/include/time.h" 3 4
# 91 "/usr/include/time.h" 3 4
typedef  __clockid_t clockid_t; 
#line 103 "/usr/include/time.h"
typedef  __timer_t timer_t; 
# 103 "/usr/include/time.h" 3 4
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort; 
#line 152 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint; 
#line 194 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 197 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 202 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 203 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 205 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; 
}__sigset_t; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __sigset_t sigset_t; 
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 124 "/usr/include/time.h" 3 4
struct timespec { __time_t tv_sec;  __syscall_slong_t tv_nsec; 
}; 
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; 
}; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __suseconds_t suseconds_t; 
#line 54 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask; 
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct { __fd_mask __fds_bits[1024 / (8 * ((int )sizeof ( __fd_mask )))]; 
}fd_set; 
#line 82 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __fd_mask fd_mask; 
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 109 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 122 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
 __extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t {char __size[56]; long int __align; 
}; 
#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef struct __pthread_internal_list {struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; 
}__pthread_list_t; 
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; short __spins; short __elision;  __pthread_list_t __list; 
}__data; char __size[40]; long int __align; 
}pthread_mutex_t; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_mutexattr_t; 
#line 154 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; 
}__data; char __size[48];  __extension__ long long int __align; 
}pthread_cond_t; 
#line 160 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_condattr_t; 
#line 164 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 168 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 222 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; int __writer; int __shared; signed char __rwelision; unsigned char __pad1[7]; unsigned long int __pad2; unsigned int __flags; 
}__data; char __size[56]; long int __align; 
}pthread_rwlock_t; 
#line 228 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; 
}pthread_rwlockattr_t; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 243 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[32]; long int __align; 
}pthread_barrier_t; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_barrierattr_t; 
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 321 "/usr/include/stdlib.h" 2 3 4
extern long int random(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 324 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 335 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 352 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; 
}; 
#line 355 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 358 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 363 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 367 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 374 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 376 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 381 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 389 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 390 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 393 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 395 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 398 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 400 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 403 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 405 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 406 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 420 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init;  __extension__ unsigned long long int __a; 
}; 
#line 424 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 427 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 432 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 436 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 441 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 445 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 449 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 452 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 456 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 466 "/usr/include/stdlib.h"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 469 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 481 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 483 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 488 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 32 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 498 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 504 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 510 "/usr/include/stdlib.h"
extern void *aligned_alloc( size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __alloc_size__ ( 2 )  )) ; 
#line 515 "/usr/include/stdlib.h"
extern void abort(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 519 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 527 "/usr/include/stdlib.h"
extern int at_quick_exit(void (*__func)(void )) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 536 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 543 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 549 "/usr/include/stdlib.h"
extern void quick_exit(int __status) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 557 "/usr/include/stdlib.h"
extern void _Exit(int __status) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 564 "/usr/include/stdlib.h"
extern char *getenv(const char *__name) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 493 "/usr/include/stdlib.h" 2 3 4
# 578 "/usr/include/stdlib.h" 3 4
extern int putenv(char *__string) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 585 "/usr/include/stdlib.h"
extern int setenv(const char *__name, const char *__value, int __replace) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 588 "/usr/include/stdlib.h"
extern int unsetenv(const char *__name) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 595 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 606 "/usr/include/stdlib.h"
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 606 "/usr/include/stdlib.h" 3 4
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 641 "/usr/include/stdlib.h"
extern int mkstemps(char *__template, int __suffixlen) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 641 "/usr/include/stdlib.h" 3 4
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 716 "/usr/include/stdlib.h"
extern int system(const char *__command); 
# 711 "/usr/include/stdlib.h" 3 4
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath(const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 741 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(const void *, const void *); 
#line 756 "/usr/include/stdlib.h"
extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 765 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
# 751 "/usr/include/stdlib.h" 3 4
# 774 "/usr/include/stdlib.h" 3 4
extern int abs(int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 775 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 780 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 789 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 791 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 798 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 812 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 818 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 824 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 831 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 834 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 836 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 843 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 846 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 851 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 855 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 862 "/usr/include/stdlib.h"
extern int mblen(const char *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 866 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 869 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 874 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 878 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 887 "/usr/include/stdlib.h"
extern int rpmatch(const char *__response) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 811 "/usr/include/stdlib.h" 3 4
# 901 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 951 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 950 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4
# 10 "OperatingSystem.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 152 "/usr/include/time.h" 3 4
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; const char *tm_zone; 
}; 
#line 165 "/usr/include/time.h"
struct itimerspec {struct timespec it_interval; struct timespec it_value; 
}; 
#line 168 "/usr/include/time.h"
struct sigevent ; 
#line 189 "/usr/include/time.h"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 192 "/usr/include/time.h"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 196 "/usr/include/time.h"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 199 "/usr/include/time.h"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 207 "/usr/include/time.h"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 186 "/usr/include/time.h" 3 4
# 226 "/usr/include/time.h" 3 4
extern  size_t strftime_l(char *__restrict __s,  size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp,  __locale_t __loc) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/time.h"
extern struct tm *gmtime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 243 "/usr/include/time.h"
extern struct tm *localtime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/time.h"
extern struct tm *gmtime_r(const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 255 "/usr/include/time.h"
extern struct tm *localtime_r(const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 261 "/usr/include/time.h"
extern char *asctime(const struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/time.h"
extern char *ctime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 273 "/usr/include/time.h"
extern char *asctime_r(const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 277 "/usr/include/time.h"
extern char *ctime_r(const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 282 "/usr/include/time.h"
extern char *__tzname[2]; 
#line 283 "/usr/include/time.h"
extern int __daylight; 
#line 284 "/usr/include/time.h"
extern long int __timezone; 
#line 289 "/usr/include/time.h"
extern char *tzname[2]; 
#line 293 "/usr/include/time.h"
extern void tzset(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 297 "/usr/include/time.h"
extern int daylight; 
#line 298 "/usr/include/time.h"
extern long int timezone; 
#line 304 "/usr/include/time.h"
extern int stime(const  time_t *__when) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 236 "/usr/include/time.h" 3 4
# 319 "/usr/include/time.h" 3 4
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 322 "/usr/include/time.h"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/time.h"
extern int dysize(int __year) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 335 "/usr/include/time.h"
extern int nanosleep(const struct timespec *__requested_time, struct timespec *__remaining); 
#line 339 "/usr/include/time.h"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 342 "/usr/include/time.h"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 346 "/usr/include/time.h"
extern int clock_settime( clockid_t __clock_id, const struct timespec *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 355 "/usr/include/time.h"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, const struct timespec *__req, struct timespec *__rem); 
#line 358 "/usr/include/time.h"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 365 "/usr/include/time.h"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 368 "/usr/include/time.h"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 373 "/usr/include/time.h"
extern int timer_settime( timer_t __timerid, int __flags, const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 377 "/usr/include/time.h"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 380 "/usr/include/time.h"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 387 "/usr/include/time.h"
extern int timespec_get(struct timespec *__ts, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 334 "/usr/include/time.h" 3 4
# 430 "/usr/include/time.h" 3 4
# 11 "OperatingSystem.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 1 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
# 12 "OperatingSystem.c" 2
# 14 "OperatingSystem.c" 
void OperatingSystem_PrepareDaemons(); 
#line 15 "OperatingSystem.c"
void OperatingSystem_PCBInitialization(int , int , int , int , int ); 
#line 16 "OperatingSystem.c"
void OperatingSystem_MoveToTheREADYState(int ); 
#line 17 "OperatingSystem.c"
void OperatingSystem_Dispatch(int ); 
#line 18 "OperatingSystem.c"
void OperatingSystem_RestoreContext(int ); 
#line 19 "OperatingSystem.c"
void OperatingSystem_SaveContext(int ); 
#line 20 "OperatingSystem.c"
void OperatingSystem_TerminateProcess(); 
#line 21 "OperatingSystem.c"
int OperatingSystem_LongTermScheduler(); 
#line 22 "OperatingSystem.c"
void OperatingSystem_PreemptRunningProcess(); 
#line 23 "OperatingSystem.c"
int OperatingSystem_CreateProcess(int ); 
#line 24 "OperatingSystem.c"
int OperatingSystem_ObtainMainMemory(int , int ); 
#line 25 "OperatingSystem.c"
int OperatingSystem_ShortTermScheduler(); 
#line 26 "OperatingSystem.c"
int OperatingSystem_ExtractFromReadyToRun(); 
#line 27 "OperatingSystem.c"
void OperatingSystem_HandleException(); 
#line 28 "OperatingSystem.c"
void OperatingSystem_HandleSystemCall(); 
#line 29 "OperatingSystem.c"
void OperatingSystem_HandleClockInterrupt(); 
#line 30 "OperatingSystem.c"
void OperatingSystem_PrintReadyToRunQueue(); 
#line 31 "OperatingSystem.c"
void OperatingSystem_HandleIOEndInterrupt(); 
#line 34 "OperatingSystem.c"
int OperatingSystem_GetWhenToWakeUpTime(); 
#line 35 "OperatingSystem.c"
int OperatingSystem_UpdateProcessor(); 
#line 36 "OperatingSystem.c"
int OperatingSystem_UpdateProcess(); 
#line 37 "OperatingSystem.c"
int OperatingSystem_GetMostImportantREADYProcessInfo(); 
#line 38 "OperatingSystem.c"
int OperatingSystem_IncreseNumberOfClockInterrupts(); 
#line 39 "OperatingSystem.c"
int OperatingSystem_checkIfShutdown(); 
#line 40 "OperatingSystem.c"
int OperatingSystem_ReleaseMainMemory(int PID); 
#line 41 "OperatingSystem.c"
int OperatingSystem_GetBiggestMemoryBlockSize(); 
#line 44 "OperatingSystem.c"
 PCB processTable[4]; 
#line 47 "OperatingSystem.c"
int OS_address_base = 4 * (300 / (4 + 1)); 
#line 50 "OperatingSystem.c"
int executingProcessID = (-1); 
#line 53 "OperatingSystem.c"
int sipID; 
#line 56 "OperatingSystem.c"
int baseDaemonsInProgramList; 
#line 59 "OperatingSystem.c"
int numberOfNotTerminatedUserProcesses = 0; 
#line 62 "OperatingSystem.c"
char *statesNames[5] = {"NEW","READY","EXECUTING","BLOCKED","EXIT"}; 
#line 65 "OperatingSystem.c"
char *exceptionNames[4] = {"division by zero","invalid processor mode","invalid address","invalid instruction"}; 
#line 68 "OperatingSystem.c"
int readyToRunQueue[2][4]; 
#line 69 "OperatingSystem.c"
int numberOfReadyToRunProcesses[2] = {0,0}; 
#line 70 "OperatingSystem.c"
char *queueNames[2] = {"USER","DAEMONS"}; 
#line 73 "OperatingSystem.c"
int numberOfClockInterrupts = 0; 
#line 77 "OperatingSystem.c"
int sleepingProcessesQueue[4]; 
#line 78 "OperatingSystem.c"
int numberOfSleepingProcesses = 0; 
#line 80 "OperatingSystem.c"
int partitionsTableSize = 0; 
#line 83 "OperatingSystem.c"
void OperatingSystem_Initialize(int daemonsIndex)  
# 1616 "OperatingSystemAspect.c"
{



# 1621 "OperatingSystemAspect.c"
{

#line 85 "OperatingSystem.c"

#line 85 "OperatingSystem.c"
int i,selectedProcess,numberOfSuccesfullyCreatedProcesses;
#line 86 "OperatingSystem.c"

#line 86 "OperatingSystem.c"
 FILE *programFile;
#line 89 "OperatingSystem.c"

#line 89 "OperatingSystem.c"
int processSize = OperatingSystem_ObtainProgramSize((&programFile), "OperatingSystemCode");
#line 92 "OperatingSystem.c"
OperatingSystem_LoadProgram(programFile, OS_address_base, processSize); 
#line 95 "OperatingSystem.c"
for(i = 0;i < 4;i++) { { 
#line 96 "OperatingSystem.c"
processTable[i].busy = 0; } } 
#line 100 "OperatingSystem.c"
Processor_InitializeInterruptVectorTable(OS_address_base + 1); 
#line 103 "OperatingSystem.c"
partitionsTableSize = OperatingSystem_InitializePartitionTable(); 
#line 106 "OperatingSystem.c"
OperatingSystem_PrepareDaemons(daemonsIndex); 
#line 110 "OperatingSystem.c"
ComputerSystem_FillInArrivalTimeQueue(); 
#line 113 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 116 "OperatingSystem.c"
numberOfSuccesfullyCreatedProcesses = OperatingSystem_LongTermScheduler(); 
#line 118 "OperatingSystem.c"
if (numberOfSuccesfullyCreatedProcesses <= 1 && OperatingSystem_IsThereANewProgram() == (-1)){
{ 
#line 120 "OperatingSystem.c"
OperatingSystem_ReadyToShutdown(); } }
#line 123 "OperatingSystem.c"
if (strcmp((programList[processTable[sipID].programListIndex]->executableName), "SystemIdleProcess")){
{ 
#line 125 "OperatingSystem.c"
OperatingSystem_ShowTime('d'); 
#line 126 "OperatingSystem.c"
ComputerSystem_DebugMessage(21, 'd'); 
#line 127 "OperatingSystem.c"
exit(1); } }
#line 132 "OperatingSystem.c"
selectedProcess = OperatingSystem_ShortTermScheduler(); 
#line 135 "OperatingSystem.c"
OperatingSystem_Dispatch(selectedProcess); 
#line 138 "OperatingSystem.c"
Processor_SetPC(OS_address_base); 
# 1674 "OperatingSystemAspect.c"

}

# 1678 "OperatingSystemAspect.c"

}
 
  void __utac_acc__Aspect__4 (void);


#line 143 "OperatingSystem.c"
void OperatingSystem_PrepareDaemons(int programListDaemonsBase)  
# 1687 "OperatingSystemAspect.c"
{



# 1692 "OperatingSystemAspect.c"
{

#line 146 "OperatingSystem.c"
programList[0] = (( PROGRAMS_DATA *)malloc(sizeof ( PROGRAMS_DATA ))); 
#line 148 "OperatingSystem.c"
(programList[0]->executableName) = "SystemIdleProcess"; 
#line 149 "OperatingSystem.c"
(programList[0]->arrivalTime) = 0; 
#line 150 "OperatingSystem.c"
(programList[0]->type) = DAEMONPROGRAM; 
#line 152 "OperatingSystem.c"
sipID = 3 % 4; 
#line 156 "OperatingSystem.c"
baseDaemonsInProgramList = programListDaemonsBase; 
# 1707 "OperatingSystemAspect.c"

}

{
__utac_acc__Aspect__4();

}

# 1716 "OperatingSystemAspect.c"

}
 
#line 163 "OperatingSystem.c"
int OperatingSystem_LongTermScheduler()  
# 1722 "OperatingSystemAspect.c"
{
# 1724 "OperatingSystemAspect.c"
int retValue_acc;




# 1730 "OperatingSystemAspect.c"
{

#line 166 "OperatingSystem.c"

#line 166 "OperatingSystem.c"
int PID,i,numberOfSuccessfullyCreatedProcesses = 0;
#line 168 "OperatingSystem.c"
while(OperatingSystem_IsThereANewProgram() == 1) { { 
#line 171 "OperatingSystem.c"
i = Heap_poll(arrivalTimeQueue, 2, (&numberOfProgramsInArrivalTimeQueue)); 
#line 174 "OperatingSystem.c"
PID = OperatingSystem_CreateProcess(i); 
#line 177 "OperatingSystem.c"
switch(PID){ { 
#line 180 "OperatingSystem.c"
case (-3): OperatingSystem_ShowTime('e'); 
#line 181 "OperatingSystem.c"
ComputerSystem_DebugMessage(103, 'e', (programList[i]->executableName)); 
#line 182 "OperatingSystem.c"
break; 
#line 184 "OperatingSystem.c"
case (-1): OperatingSystem_ShowTime('e'); 
#line 186 "OperatingSystem.c"
ComputerSystem_DebugMessage(104, 'e', (programList[i]->executableName), "it does not exists"); 
#line 187 "OperatingSystem.c"
break; 
#line 189 "OperatingSystem.c"
case (-2): OperatingSystem_ShowTime('e'); 
#line 191 "OperatingSystem.c"
ComputerSystem_DebugMessage(104, 'e', (programList[i]->executableName), "invalid priority or size"); 
#line 192 "OperatingSystem.c"
break; 
#line 194 "OperatingSystem.c"
case (-4): OperatingSystem_ShowTime('e'); 
#line 196 "OperatingSystem.c"
ComputerSystem_DebugMessage(105, 'e', (programList[i]->executableName)); 
#line 197 "OperatingSystem.c"
break; 
#line 199 "OperatingSystem.c"
default: numberOfSuccessfullyCreatedProcesses++; 
#line 203 "OperatingSystem.c"
if ((programList[i]->type) == USERPROGRAM){
{ 
#line 204 "OperatingSystem.c"
numberOfNotTerminatedUserProcesses++; } }
#line 208 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(PID); } } } } 
#line 213 "OperatingSystem.c"
if (numberOfSuccessfullyCreatedProcesses){
{ 
#line 214 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }
#line 218 "OperatingSystem.c"

# 1785 "OperatingSystemAspect.c"
retValue_acc = numberOfSuccessfullyCreatedProcesses;
# 1787 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 1790 "OperatingSystemAspect.c"

}

# 1794 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 1797 "OperatingSystemAspect.c"

}
 
#line 222 "OperatingSystem.c"
int OperatingSystem_CreateProcess(int indexOfExecutableProgram)  
# 1803 "OperatingSystemAspect.c"
{
# 1805 "OperatingSystemAspect.c"
int retValue_acc;




# 1811 "OperatingSystemAspect.c"
{

#line 224 "OperatingSystem.c"

#line 224 "OperatingSystem.c"
int PID;
#line 225 "OperatingSystem.c"

#line 225 "OperatingSystem.c"
int processSize;
#line 226 "OperatingSystem.c"

#line 226 "OperatingSystem.c"
int mainMemoryBlockIndex,initAddress;
#line 227 "OperatingSystem.c"

#line 227 "OperatingSystem.c"
int priority;
#line 228 "OperatingSystem.c"

#line 228 "OperatingSystem.c"
 FILE *programFile;
#line 229 "OperatingSystem.c"

#line 229 "OperatingSystem.c"
 PROGRAMS_DATA *executableProgram = programList[indexOfExecutableProgram];
#line 232 "OperatingSystem.c"
PID = OperatingSystem_ObtainAnEntryInTheProcessTable(); 
#line 235 "OperatingSystem.c"
if (PID == (-3)){
{ 
#line 236 "OperatingSystem.c"

# 1845 "OperatingSystemAspect.c"
retValue_acc = PID;
# 1847 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 240 "OperatingSystem.c"
processSize = OperatingSystem_ObtainProgramSize((&programFile), (executableProgram->executableName)); 
#line 243 "OperatingSystem.c"
if (processSize == (-2)){
{ 
#line 244 "OperatingSystem.c"

# 1857 "OperatingSystemAspect.c"
retValue_acc = (-2);
# 1859 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 248 "OperatingSystem.c"
if (processSize == (-1)){
{ 
#line 249 "OperatingSystem.c"

# 1867 "OperatingSystemAspect.c"
retValue_acc = (-1);
# 1869 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 253 "OperatingSystem.c"
priority = OperatingSystem_ObtainPriority(programFile); 
#line 256 "OperatingSystem.c"
if (priority == (-2)){
{ 
#line 257 "OperatingSystem.c"

# 1879 "OperatingSystemAspect.c"
retValue_acc = (-2);
# 1881 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 260 "OperatingSystem.c"
OperatingSystem_ShowTime('m'); 
#line 262 "OperatingSystem.c"
ComputerSystem_DebugMessage(142, 'm', PID, (executableProgram->executableName), processSize); 
#line 265 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable("before allocating memory"); 
#line 268 "OperatingSystem.c"
mainMemoryBlockIndex = OperatingSystem_ObtainMainMemory(processSize, PID); 
#line 271 "OperatingSystem.c"
if (mainMemoryBlockIndex == (-4)){
{ 
#line 272 "OperatingSystem.c"

# 1897 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 1899 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }else{
if (mainMemoryBlockIndex == (-5)){
{ 
#line 276 "OperatingSystem.c"
OperatingSystem_ShowTime('e'); 
#line 277 "OperatingSystem.c"
ComputerSystem_DebugMessage(144, 'e', (executableProgram->executableName)); 
#line 278 "OperatingSystem.c"

# 1910 "OperatingSystemAspect.c"
retValue_acc = (-5);
# 1912 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }else{
{ 
#line 282 "OperatingSystem.c"
OperatingSystem_ShowTime('m'); 
#line 283 "OperatingSystem.c"
ComputerSystem_DebugMessage(143, 'm', mainMemoryBlockIndex, partitionsTable[mainMemoryBlockIndex].initAddress, partitionsTable[mainMemoryBlockIndex].size, PID, (executableProgram->executableName)); 
#line 284 "OperatingSystem.c"
partitionsTable[mainMemoryBlockIndex].occupied = 1; 
#line 285 "OperatingSystem.c"
partitionsTable[mainMemoryBlockIndex].PID = PID; 
#line 286 "OperatingSystem.c"
initAddress = partitionsTable[mainMemoryBlockIndex].initAddress; } }}
#line 290 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 292 "OperatingSystem.c"
ComputerSystem_DebugMessage(111, 'p', PID, (executableProgram->executableName), statesNames[NEW]); 
#line 296 "OperatingSystem.c"
if (OperatingSystem_LoadProgram(programFile, initAddress, processSize) == (-4)){
{ 
#line 297 "OperatingSystem.c"

# 1935 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 1937 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 300 "OperatingSystem.c"
OperatingSystem_PCBInitialization(PID, initAddress, processSize, priority, indexOfExecutableProgram); 
#line 303 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable("after allocating memory"); 
#line 306 "OperatingSystem.c"
OperatingSystem_ShowTime('t'); 
#line 307 "OperatingSystem.c"
ComputerSystem_DebugMessage(22, 't', PID, (executableProgram->executableName)); 
#line 309 "OperatingSystem.c"

# 1950 "OperatingSystemAspect.c"
retValue_acc = PID;
# 1952 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 1955 "OperatingSystemAspect.c"

}

# 1959 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 1962 "OperatingSystemAspect.c"

}
 
#line 315 "OperatingSystem.c"
int OperatingSystem_ObtainMainMemory(int processSize, int PID)  
# 1968 "OperatingSystemAspect.c"
{
# 1970 "OperatingSystemAspect.c"
int retValue_acc;




# 1976 "OperatingSystemAspect.c"
{

#line 317 "OperatingSystem.c"

#line 317 "OperatingSystem.c"
int blockIndex;
#line 318 "OperatingSystem.c"

#line 318 "OperatingSystem.c"
int bestBlockIndex = (-5),bestBlockSize = 0x7fffffff;
#line 319 "OperatingSystem.c"
for(blockIndex = 0;blockIndex < partitionsTableSize;blockIndex++) { { 
#line 326 "OperatingSystem.c"
if (processSize > OperatingSystem_GetBiggestMemoryBlockSize()){
{ 
#line 323 "OperatingSystem.c"

# 1994 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 1996 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 326 "OperatingSystem.c"
if ((!partitionsTable[blockIndex].occupied) && partitionsTable[blockIndex].size >= processSize && partitionsTable[blockIndex].size < bestBlockSize){
{ 
#line 327 "OperatingSystem.c"
bestBlockIndex = blockIndex; 
#line 328 "OperatingSystem.c"
bestBlockSize = partitionsTable[blockIndex].size; 
#line 331 "OperatingSystem.c"
if (processSize == partitionsTable[blockIndex].size){
{ 
#line 332 "OperatingSystem.c"
break; } }} }} } 
#line 337 "OperatingSystem.c"

# 2013 "OperatingSystemAspect.c"
retValue_acc = bestBlockIndex;
# 2015 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2018 "OperatingSystemAspect.c"

}

# 2022 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2025 "OperatingSystemAspect.c"

}
 
#line 340 "OperatingSystem.c"
int OperatingSystem_GetBiggestMemoryBlockSize()  
# 2031 "OperatingSystemAspect.c"
{
# 2033 "OperatingSystemAspect.c"
int retValue_acc;




# 2039 "OperatingSystemAspect.c"
{

#line 341 "OperatingSystem.c"

#line 341 "OperatingSystem.c"
int blockIndex;
#line 342 "OperatingSystem.c"

#line 342 "OperatingSystem.c"
int biggestBlockSize = (-1);
#line 343 "OperatingSystem.c"
for(blockIndex = 0;blockIndex < partitionsTableSize;blockIndex++) { { 
#line 347 "OperatingSystem.c"
if (partitionsTable[blockIndex].size > biggestBlockSize){
{ 
#line 345 "OperatingSystem.c"
biggestBlockSize = partitionsTable[blockIndex].size; } }} } 
#line 348 "OperatingSystem.c"

# 2059 "OperatingSystemAspect.c"
retValue_acc = biggestBlockSize;
# 2061 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2064 "OperatingSystemAspect.c"

}

# 2068 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2071 "OperatingSystemAspect.c"

}
 
#line 353 "OperatingSystem.c"
int OperatingSystem_ReleaseMainMemory(int PID)  
# 2077 "OperatingSystemAspect.c"
{
# 2079 "OperatingSystemAspect.c"
int retValue_acc;




# 2085 "OperatingSystemAspect.c"
{

#line 355 "OperatingSystem.c"

#line 355 "OperatingSystem.c"
int blockIndex;
#line 356 "OperatingSystem.c"
for(blockIndex = 0;blockIndex < partitionsTableSize;blockIndex++) { { 
#line 365 "OperatingSystem.c"
if (partitionsTable[blockIndex].occupied && partitionsTable[blockIndex].PID == PID){
{ 
#line 362 "OperatingSystem.c"
partitionsTable[blockIndex].occupied = 0; 
#line 363 "OperatingSystem.c"

# 2101 "OperatingSystemAspect.c"
retValue_acc = blockIndex;
# 2103 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }} } 
#line 366 "OperatingSystem.c"

# 2108 "OperatingSystemAspect.c"
retValue_acc = (-1);
# 2110 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2113 "OperatingSystemAspect.c"

}

# 2117 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2120 "OperatingSystemAspect.c"

}
 
#line 370 "OperatingSystem.c"
void OperatingSystem_PCBInitialization(int PID, int initialPhysicalAddress, int processSize, int priority, int processPLIndex)  
# 2126 "OperatingSystemAspect.c"
{



# 2131 "OperatingSystemAspect.c"
{

#line 372 "OperatingSystem.c"
processTable[PID].busy = 1; 
#line 373 "OperatingSystem.c"
processTable[PID].initialPhysicalAddress = initialPhysicalAddress; 
#line 374 "OperatingSystem.c"
processTable[PID].processSize = processSize; 
#line 375 "OperatingSystem.c"
processTable[PID].state = NEW; 
#line 376 "OperatingSystem.c"
processTable[PID].priority = priority; 
#line 377 "OperatingSystem.c"
processTable[PID].programListIndex = processPLIndex; 
#line 380 "OperatingSystem.c"
if ((programList[processPLIndex]->type) == DAEMONPROGRAM){
{ 
#line 381 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = initialPhysicalAddress; 
#line 382 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = (((unsigned int )1)) << EXECUTION_MODE_BIT; 
#line 385 "OperatingSystem.c"
processTable[PID].queueID = DAEMONSQUEUE; } }else{
{ 
#line 387 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = 0; 
#line 388 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = 0; 
#line 391 "OperatingSystem.c"
processTable[PID].queueID = USERPROCESSQUEUE; } }
# 2162 "OperatingSystemAspect.c"

}

# 2166 "OperatingSystemAspect.c"

}
 
#line 398 "OperatingSystem.c"
void OperatingSystem_MoveToTheREADYState(int PID)  
# 2172 "OperatingSystemAspect.c"
{



# 2177 "OperatingSystemAspect.c"
{

#line 400 "OperatingSystem.c"

#line 400 "OperatingSystem.c"
int queue = processTable[PID].queueID;
#line 402 "OperatingSystem.c"
if (Heap_add(PID, readyToRunQueue[queue], 1, (&numberOfReadyToRunProcesses[queue]), 4) == 0){
{ 
#line 403 "OperatingSystem.c"

#line 403 "OperatingSystem.c"
int lastState = processTable[PID].state;
#line 404 "OperatingSystem.c"
processTable[PID].state = READY; 
#line 405 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 406 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', PID, (programList[processTable[PID].programListIndex]->executableName), statesNames[lastState], statesNames[READY]); } }
# 2197 "OperatingSystemAspect.c"

}

# 2201 "OperatingSystemAspect.c"

}
 
#line 412 "OperatingSystem.c"
void OperatingSystem_MoveToTheBLOCKEDState(int PID)  
# 2207 "OperatingSystemAspect.c"
{



# 2212 "OperatingSystemAspect.c"
{

#line 432 "OperatingSystem.c"
if (Heap_add(PID, sleepingProcessesQueue, 0, (&numberOfSleepingProcesses), 4) == 0){
{ 
#line 417 "OperatingSystem.c"
OperatingSystem_SaveContext(executingProcessID); 
#line 420 "OperatingSystem.c"

#line 420 "OperatingSystem.c"
int lastState = processTable[PID].state;
#line 423 "OperatingSystem.c"
processTable[PID].state = BLOCKED; 
#line 426 "OperatingSystem.c"
processTable[PID].whenToWakeUp = OperatingSystem_GetWhenToWakeUpTime(); 
#line 429 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 430 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', PID, (programList[processTable[PID].programListIndex]->executableName), statesNames[lastState], statesNames[BLOCKED]); } }
# 2232 "OperatingSystemAspect.c"

}

# 2236 "OperatingSystemAspect.c"

}
 
#line 437 "OperatingSystem.c"
int OperatingSystem_ShortTermScheduler()  
# 2242 "OperatingSystemAspect.c"
{
# 2244 "OperatingSystemAspect.c"
int retValue_acc;




# 2250 "OperatingSystemAspect.c"
{

#line 438 "OperatingSystem.c"

#line 438 "OperatingSystem.c"
int selectedProcess;
#line 439 "OperatingSystem.c"
selectedProcess = OperatingSystem_ExtractFromReadyToRun(); 
#line 440 "OperatingSystem.c"

# 2261 "OperatingSystemAspect.c"
retValue_acc = selectedProcess;
# 2263 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2266 "OperatingSystemAspect.c"

}

# 2270 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2273 "OperatingSystemAspect.c"

}
 
#line 444 "OperatingSystem.c"
int OperatingSystem_ExtractFromReadyToRun()  
# 2279 "OperatingSystemAspect.c"
{
# 2281 "OperatingSystemAspect.c"
int retValue_acc;




# 2287 "OperatingSystemAspect.c"
{

#line 447 "OperatingSystem.c"

#line 447 "OperatingSystem.c"
int selectedProcess = (-1);
#line 450 "OperatingSystem.c"
selectedProcess = Heap_poll(readyToRunQueue[USERPROCESSQUEUE], 1, (&numberOfReadyToRunProcesses[USERPROCESSQUEUE])); 
#line 453 "OperatingSystem.c"
if (selectedProcess == (-1)){
{ 
#line 454 "OperatingSystem.c"
selectedProcess = Heap_poll(readyToRunQueue[DAEMONSQUEUE], 1, (&numberOfReadyToRunProcesses[DAEMONSQUEUE])); } }
#line 458 "OperatingSystem.c"

# 2303 "OperatingSystemAspect.c"
retValue_acc = selectedProcess;
# 2305 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2308 "OperatingSystemAspect.c"

}

# 2312 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2315 "OperatingSystemAspect.c"

}
 
#line 462 "OperatingSystem.c"
void OperatingSystem_Dispatch(int PID)  
# 2321 "OperatingSystemAspect.c"
{



# 2326 "OperatingSystemAspect.c"
{

#line 465 "OperatingSystem.c"
executingProcessID = PID; 
#line 468 "OperatingSystem.c"

#line 468 "OperatingSystem.c"
int lastState = processTable[PID].state;
#line 471 "OperatingSystem.c"
processTable[PID].state = EXECUTING; 
#line 474 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 475 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', PID, (programList[processTable[PID].programListIndex]->executableName), statesNames[lastState], statesNames[EXECUTING]); 
#line 478 "OperatingSystem.c"
OperatingSystem_RestoreContext(PID); 
# 2343 "OperatingSystemAspect.c"

}

# 2347 "OperatingSystemAspect.c"

}
 
#line 482 "OperatingSystem.c"
void OperatingSystem_RestoreContext(int PID)  
# 2353 "OperatingSystemAspect.c"
{



# 2358 "OperatingSystemAspect.c"
{

#line 485 "OperatingSystem.c"
Processor_CopyInSystemStack(300 - 1, processTable[PID].copyOfPCRegister); 
#line 486 "OperatingSystem.c"
Processor_CopyInSystemStack(300 - 2, processTable[PID].copyOfPSWRegister); 
#line 487 "OperatingSystem.c"
Processor_SetAccumulator(processTable[PID].copyOfAccumulator); 
#line 490 "OperatingSystem.c"
MMU_SetBase(processTable[PID].initialPhysicalAddress); 
#line 491 "OperatingSystem.c"
MMU_SetLimit(processTable[PID].processSize); 
# 2371 "OperatingSystemAspect.c"

}

# 2375 "OperatingSystemAspect.c"

}
 
#line 496 "OperatingSystem.c"
void OperatingSystem_PreemptRunningProcess()  
# 2381 "OperatingSystemAspect.c"
{



# 2386 "OperatingSystemAspect.c"
{

#line 499 "OperatingSystem.c"
OperatingSystem_SaveContext(executingProcessID); 
#line 501 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(executingProcessID); 
#line 503 "OperatingSystem.c"
executingProcessID = (-1); 
# 2395 "OperatingSystemAspect.c"

}

# 2399 "OperatingSystemAspect.c"

}
 
#line 508 "OperatingSystem.c"
void OperatingSystem_SaveContext(int PID)  
# 2405 "OperatingSystemAspect.c"
{



# 2410 "OperatingSystemAspect.c"
{

#line 511 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = Processor_CopyFromSystemStack(300 - 1); 
#line 514 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = Processor_CopyFromSystemStack(300 - 2); 
#line 517 "OperatingSystem.c"
processTable[PID].copyOfAccumulator = Processor_GetAccumulator(); 
# 2419 "OperatingSystemAspect.c"

}

# 2423 "OperatingSystemAspect.c"

}
 
#line 522 "OperatingSystem.c"
void OperatingSystem_HandleException()  
# 2429 "OperatingSystemAspect.c"
{



# 2434 "OperatingSystemAspect.c"
{

#line 525 "OperatingSystem.c"
OperatingSystem_ShowTime('i'); 
#line 526 "OperatingSystem.c"
ComputerSystem_DebugMessage(140, 'i', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), exceptionNames[Processor_GetRegisterB()]); 
#line 529 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); 
#line 530 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
# 2445 "OperatingSystemAspect.c"

}

# 2449 "OperatingSystemAspect.c"

}
 
#line 534 "OperatingSystem.c"
void OperatingSystem_TerminateProcess()  
# 2455 "OperatingSystemAspect.c"
{



# 2460 "OperatingSystemAspect.c"
{

#line 537 "OperatingSystem.c"

#line 537 "OperatingSystem.c"
int lastState = processTable[executingProcessID].state;
#line 540 "OperatingSystem.c"
processTable[executingProcessID].state = EXIT; 
#line 543 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 544 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), statesNames[lastState], statesNames[EXIT]); 
#line 547 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable("before releasing memory"); 
#line 550 "OperatingSystem.c"

#line 550 "OperatingSystem.c"
int releasedBlockIndex = OperatingSystem_ReleaseMainMemory(executingProcessID);
#line 553 "OperatingSystem.c"
OperatingSystem_ShowTime('m'); 
#line 554 "OperatingSystem.c"
ComputerSystem_DebugMessage(145, 'm', releasedBlockIndex, partitionsTable[releasedBlockIndex].initAddress, partitionsTable[releasedBlockIndex].size, executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName)); 
#line 561 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable("after releasing memory"); 
#line 564 "OperatingSystem.c"
if ((programList[processTable[executingProcessID].programListIndex]->type) == USERPROGRAM){
{ 
#line 566 "OperatingSystem.c"
numberOfNotTerminatedUserProcesses--; } }
#line 570 "OperatingSystem.c"
if (OperatingSystem_checkIfShutdown()){
{ 
#line 572 "OperatingSystem.c"
OperatingSystem_ReadyToShutdown(); } }
#line 577 "OperatingSystem.c"
OperatingSystem_Dispatch(OperatingSystem_ShortTermScheduler()); 
# 2497 "OperatingSystemAspect.c"

}

# 2501 "OperatingSystemAspect.c"

}
 
#line 582 "OperatingSystem.c"
void OperatingSystem_HandleSystemCall()  
# 2507 "OperatingSystemAspect.c"
{



# 2512 "OperatingSystemAspect.c"
{

#line 585 "OperatingSystem.c"

#line 585 "OperatingSystem.c"
int systemCallID;
#line 586 "OperatingSystem.c"

#line 586 "OperatingSystem.c"
int currentQueue,currentPriority;
#line 587 "OperatingSystem.c"

#line 587 "OperatingSystem.c"
int oldProcessID,newProcessID;
#line 590 "OperatingSystem.c"
systemCallID = Processor_GetRegisterA(); 
#line 593 "OperatingSystem.c"
switch(systemCallID){ { 
#line 597 "OperatingSystem.c"
case SYSCALL_PRINTEXECPID: OperatingSystem_ShowTime('p'); 
#line 598 "OperatingSystem.c"
ComputerSystem_DebugMessage(24, 'p', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName)); 
#line 599 "OperatingSystem.c"
break; 
#line 601 "OperatingSystem.c"
case SYSCALL_END: OperatingSystem_ShowTime('p'); 
#line 604 "OperatingSystem.c"
ComputerSystem_DebugMessage(25, 'p', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName)); 
#line 605 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); 
#line 606 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 607 "OperatingSystem.c"
break; 
#line 609 "OperatingSystem.c"
case SYSCALL_YIELD: currentQueue = processTable[executingProcessID].queueID; 
#line 614 "OperatingSystem.c"
currentPriority = processTable[executingProcessID].priority; 
#line 617 "OperatingSystem.c"
if (numberOfReadyToRunProcesses[currentQueue] > 0 && processTable[readyToRunQueue[currentQueue][0]].priority == currentPriority){
{ 
#line 618 "OperatingSystem.c"
oldProcessID = executingProcessID; 
#line 619 "OperatingSystem.c"
newProcessID = readyToRunQueue[currentQueue][0]; 
#line 622 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 623 "OperatingSystem.c"
ComputerSystem_DebugMessage(115, 's', oldProcessID, (programList[processTable[oldProcessID].programListIndex]->executableName), newProcessID, (programList[processTable[newProcessID].programListIndex]->executableName)); 
#line 628 "OperatingSystem.c"
OperatingSystem_PreemptRunningProcess(); 
#line 631 "OperatingSystem.c"
OperatingSystem_Dispatch(OperatingSystem_ShortTermScheduler()); 
#line 633 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }
#line 636 "OperatingSystem.c"
break; 
#line 638 "OperatingSystem.c"
case SYSCALL_SLEEP: OperatingSystem_MoveToTheBLOCKEDState(executingProcessID); 
#line 643 "OperatingSystem.c"
OperatingSystem_Dispatch(OperatingSystem_ShortTermScheduler()); 
#line 646 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 647 "OperatingSystem.c"
break; 
#line 649 "OperatingSystem.c"
default: OperatingSystem_ShowTime('i'); 
#line 651 "OperatingSystem.c"
ComputerSystem_DebugMessage(141, 'i', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), systemCallID); 
#line 652 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); 
#line 653 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 654 "OperatingSystem.c"
break; } } 
# 2588 "OperatingSystemAspect.c"

}

# 2592 "OperatingSystemAspect.c"

}
 
  void __utac_acc__Aspect__3 (void);


#line 659 "OperatingSystem.c"
void OperatingSystem_InterruptLogic(int entryPoint)  
# 2601 "OperatingSystemAspect.c"
{



{
__utac_acc__Aspect__3();

}

# 2611 "OperatingSystemAspect.c"
{

#line 674 "OperatingSystem.c"
switch(entryPoint){ { 
#line 662 "OperatingSystem.c"
case SYSCALL_BIT: OperatingSystem_HandleSystemCall(); 
#line 663 "OperatingSystem.c"
break; 
#line 664 "OperatingSystem.c"
case EXCEPTION_BIT: OperatingSystem_HandleException(); 
#line 666 "OperatingSystem.c"
break; 
#line 667 "OperatingSystem.c"
case CLOCKINT_BIT: OperatingSystem_HandleClockInterrupt(); 
#line 669 "OperatingSystem.c"
break; 
#line 670 "OperatingSystem.c"
case IOEND_BIT: OperatingSystem_HandleIOEndInterrupt(); 
#line 672 "OperatingSystem.c"
break; } } 
# 2632 "OperatingSystemAspect.c"

}

# 2636 "OperatingSystemAspect.c"

}
 
#line 678 "OperatingSystem.c"
void OperatingSystem_PrintReadyToRunQueue()  
# 2642 "OperatingSystemAspect.c"
{



# 2647 "OperatingSystemAspect.c"
{

#line 683 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 684 "OperatingSystem.c"
ComputerSystem_DebugMessage(106, 's'); 
#line 685 "OperatingSystem.c"

#line 685 "OperatingSystem.c"
int i,processPID,queue;
#line 688 "OperatingSystem.c"
for(queue = 0;queue < 2;queue++) { { 
#line 691 "OperatingSystem.c"
ComputerSystem_DebugMessage(112, 's', queueNames[queue]); 
#line 694 "OperatingSystem.c"
if (numberOfReadyToRunProcesses[queue] == 0){
{ 
#line 695 "OperatingSystem.c"
ComputerSystem_DebugMessage(113, 's'); } }
#line 699 "OperatingSystem.c"
for(i = 0;i < numberOfReadyToRunProcesses[queue];i++) { { 
#line 701 "OperatingSystem.c"
processPID = readyToRunQueue[queue][i]; 
#line 704 "OperatingSystem.c"
if (i == numberOfReadyToRunProcesses[queue] - 1){
{ 
#line 706 "OperatingSystem.c"
ComputerSystem_DebugMessage(107, 's', processPID, processTable[processPID].priority, "\n"); } }else{
{ 
#line 708 "OperatingSystem.c"
ComputerSystem_DebugMessage(107, 's', processPID, processTable[processPID].priority, ", "); } }} } } } 
# 2679 "OperatingSystemAspect.c"

}

# 2683 "OperatingSystemAspect.c"

}
 
#line 716 "OperatingSystem.c"
void OperatingSystem_HandleClockInterrupt()  
# 2689 "OperatingSystemAspect.c"
{



# 2694 "OperatingSystemAspect.c"
{

#line 719 "OperatingSystem.c"

#line 719 "OperatingSystem.c"
int currentNumberOfClockInterrupts = OperatingSystem_IncreseNumberOfClockInterrupts();
#line 722 "OperatingSystem.c"
OperatingSystem_ShowTime('i'); 
#line 723 "OperatingSystem.c"
ComputerSystem_DebugMessage(120, 'i', currentNumberOfClockInterrupts); 
#line 726 "OperatingSystem.c"

#line 726 "OperatingSystem.c"
int unBLOCKEDProcesses = 0;
#line 730 "OperatingSystem.c"
while(Heap_getFirst(sleepingProcessesQueue, numberOfSleepingProcesses) != (-1) && processTable[Heap_getFirst(sleepingProcessesQueue, numberOfSleepingProcesses)].whenToWakeUp <= currentNumberOfClockInterrupts) { { 
#line 732 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(Heap_poll(sleepingProcessesQueue, 0, (&numberOfSleepingProcesses))); 
#line 734 "OperatingSystem.c"
unBLOCKEDProcesses++; } } 
#line 738 "OperatingSystem.c"
if (unBLOCKEDProcesses || OperatingSystem_LongTermScheduler()){
{ 
#line 739 "OperatingSystem.c"
OperatingSystem_UpdateProcessor(); } }else{
if (OperatingSystem_checkIfShutdown()){
{ 
#line 742 "OperatingSystem.c"
OperatingSystem_ReadyToShutdown(); } }}
# 2724 "OperatingSystemAspect.c"

}

# 2728 "OperatingSystemAspect.c"

}
 
#line 747 "OperatingSystem.c"
void OperatingSystem_HandleIOEndInterrupt()  
# 2734 "OperatingSystemAspect.c"
{



# 2739 "OperatingSystemAspect.c"
{

# 2742 "OperatingSystemAspect.c"

}

# 2746 "OperatingSystemAspect.c"

}
 
#line 754 "OperatingSystem.c"
int OperatingSystem_GetExecutingProcessID()  
# 2752 "OperatingSystemAspect.c"
{
# 2754 "OperatingSystemAspect.c"
int retValue_acc;




# 2760 "OperatingSystemAspect.c"
{

#line 755 "OperatingSystem.c"

# 2765 "OperatingSystemAspect.c"
retValue_acc = executingProcessID;
# 2767 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2770 "OperatingSystemAspect.c"

}

# 2774 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2777 "OperatingSystemAspect.c"

}
 
#line 761 "OperatingSystem.c"
int OperatingSystem_GetWhenToWakeUpTime()  
# 2783 "OperatingSystemAspect.c"
{
# 2785 "OperatingSystemAspect.c"
int retValue_acc;




# 2791 "OperatingSystemAspect.c"
{

#line 764 "OperatingSystem.c"

# 2796 "OperatingSystemAspect.c"
retValue_acc = abs(Processor_GetAccumulator()) + numberOfClockInterrupts + 1;
# 2798 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2801 "OperatingSystemAspect.c"

}

# 2805 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2808 "OperatingSystemAspect.c"

}
 
#line 768 "OperatingSystem.c"
int OperatingSystem_IncreseNumberOfClockInterrupts()  
# 2814 "OperatingSystemAspect.c"
{
# 2816 "OperatingSystemAspect.c"
int retValue_acc;




# 2822 "OperatingSystemAspect.c"
{

#line 771 "OperatingSystem.c"

# 2827 "OperatingSystemAspect.c"
retValue_acc = (++numberOfClockInterrupts);
# 2829 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2832 "OperatingSystemAspect.c"

}

# 2836 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2839 "OperatingSystemAspect.c"

}
 
#line 776 "OperatingSystem.c"
int OperatingSystem_UpdateProcessor()  
# 2845 "OperatingSystemAspect.c"
{
# 2847 "OperatingSystemAspect.c"
int retValue_acc;




# 2853 "OperatingSystemAspect.c"
{

#line 780 "OperatingSystem.c"

#line 780 "OperatingSystem.c"
int executingProcessQueue = processTable[executingProcessID].queueID,executingProcessPriority = processTable[executingProcessID].priority;
#line 783 "OperatingSystem.c"

#line 783 "OperatingSystem.c"
int mostImportantREADYProcess = OperatingSystem_GetMostImportantREADYProcessInfo();
#line 785 "OperatingSystem.c"
if (processTable[mostImportantREADYProcess].queueID == executingProcessQueue){
{ 
#line 793 "OperatingSystem.c"
if (processTable[mostImportantREADYProcess].priority < executingProcessPriority){
{ 
#line 789 "OperatingSystem.c"

# 2872 "OperatingSystemAspect.c"
retValue_acc = OperatingSystem_UpdateProcess();
# 2874 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }else{
{ 
#line 792 "OperatingSystem.c"

# 2880 "OperatingSystemAspect.c"
retValue_acc = 0;
# 2882 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }} }else{
if (processTable[mostImportantREADYProcess].queueID < executingProcessQueue){
{ 
#line 797 "OperatingSystem.c"

# 2889 "OperatingSystemAspect.c"
retValue_acc = OperatingSystem_UpdateProcess();
# 2891 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }else{
{ 
#line 800 "OperatingSystem.c"

# 2897 "OperatingSystemAspect.c"
retValue_acc = 0;
# 2899 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }}
# 2902 "OperatingSystemAspect.c"

}

# 2906 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2909 "OperatingSystemAspect.c"

}
 
#line 806 "OperatingSystem.c"
int OperatingSystem_UpdateProcess()  
# 2915 "OperatingSystemAspect.c"
{
# 2917 "OperatingSystemAspect.c"
int retValue_acc;




# 2923 "OperatingSystemAspect.c"
{

#line 807 "OperatingSystem.c"

#line 807 "OperatingSystem.c"
int lastExecutingProcess = executingProcessID;
#line 808 "OperatingSystem.c"

#line 808 "OperatingSystem.c"
int newExecutingProcess = OperatingSystem_ShortTermScheduler();
#line 810 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 811 "OperatingSystem.c"
ComputerSystem_DebugMessage(121, 's', lastExecutingProcess, (programList[processTable[lastExecutingProcess].programListIndex]->executableName), newExecutingProcess, (programList[processTable[newExecutingProcess].programListIndex]->executableName)); 
#line 814 "OperatingSystem.c"
OperatingSystem_PreemptRunningProcess(); 
#line 815 "OperatingSystem.c"
OperatingSystem_Dispatch(newExecutingProcess); 
#line 818 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 820 "OperatingSystem.c"

# 2946 "OperatingSystemAspect.c"
retValue_acc = 1;
# 2948 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2951 "OperatingSystemAspect.c"

}

# 2955 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2958 "OperatingSystemAspect.c"

}
 
#line 825 "OperatingSystem.c"
int OperatingSystem_GetMostImportantREADYProcessInfo()  
# 2964 "OperatingSystemAspect.c"
{
# 2966 "OperatingSystemAspect.c"
int retValue_acc;




# 2972 "OperatingSystemAspect.c"
{

#line 827 "OperatingSystem.c"

#line 827 "OperatingSystem.c"
int mostImportantREADYProcess = Heap_getFirst(readyToRunQueue[USERPROCESSQUEUE], numberOfReadyToRunProcesses[USERPROCESSQUEUE]);
#line 830 "OperatingSystem.c"
if (mostImportantREADYProcess == (-1)){
{ 
#line 831 "OperatingSystem.c"
mostImportantREADYProcess = Heap_getFirst(readyToRunQueue[DAEMONSQUEUE], numberOfReadyToRunProcesses[DAEMONSQUEUE]); } }
#line 834 "OperatingSystem.c"

# 2986 "OperatingSystemAspect.c"
retValue_acc = mostImportantREADYProcess;
# 2988 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2991 "OperatingSystemAspect.c"

}

# 2995 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2998 "OperatingSystemAspect.c"

}
 
#line 838 "OperatingSystem.c"
int OperatingSystem_checkIfShutdown()  
# 3004 "OperatingSystemAspect.c"
{
# 3006 "OperatingSystemAspect.c"
int retValue_acc;




# 3012 "OperatingSystemAspect.c"
{

#line 839 "OperatingSystem.c"

#line 839 "OperatingSystem.c"
int arrivalTimeQueue = OperatingSystem_IsThereANewProgram();
#line 840 "OperatingSystem.c"

#line 840 "OperatingSystem.c"
int sleepingQueue = Heap_getFirst(sleepingProcessesQueue, numberOfSleepingProcesses);
#line 841 "OperatingSystem.c"

#line 841 "OperatingSystem.c"
int rTRQ = OperatingSystem_GetMostImportantREADYProcessInfo();
#line 843 "OperatingSystem.c"
if (arrivalTimeQueue == (-1) && sleepingQueue == (-1) && rTRQ == (-1)){
{ 
#line 844 "OperatingSystem.c"

# 3032 "OperatingSystemAspect.c"
retValue_acc = 1;
# 3034 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }else{
{ 
#line 846 "OperatingSystem.c"

# 3040 "OperatingSystemAspect.c"
retValue_acc = 0;
# 3042 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
# 3045 "OperatingSystemAspect.c"

}

# 3049 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 3052 "OperatingSystemAspect.c"

}
 