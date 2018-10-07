	.file	"rvo.cpp"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
.lcomm _ZStL8__ioinit,1,1
.LC0:
	.ascii "I am in constructor\12\0"
	.section	.text$_ZN3RVOC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN3RVOC1Ev
	.def	_ZN3RVOC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN3RVOC1Ev
_ZN3RVOC1Ev:
.LFB1575:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC0(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii "I am in copy constructor\12\0"
	.section	.text$_ZN3RVOC1ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN3RVOC1ERKS_
	.def	_ZN3RVOC1ERKS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN3RVOC1ERKS_
_ZN3RVOC1ERKS_:
.LFB1578:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	leaq	.LC1(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC2:
	.ascii "I am in destructor\12\0"
	.section	.text$_ZN3RVOD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN3RVOD1Ev
	.def	_ZN3RVOD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN3RVOD1Ev
_ZN3RVOD1Ev:
.LFB1581:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC2(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1581:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1581-.LLSDACSB1581
.LLSDACSB1581:
.LLSDACSE1581:
	.section	.text$_ZN3RVOD1Ev,"x"
	.linkonce discard
	.seh_endproc
	.text
	.globl	_Z8MyMethodi
	.def	_Z8MyMethodi;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z8MyMethodi
_Z8MyMethodi:
.LFB1582:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movl	%edx, -40(%rbp)
	leaq	-84(%rbp), %rax
	movq	%rax, %rcx
.LEHB0:
	call	_ZN3RVOC1Ev
.LEHE0:
	movl	-40(%rbp), %eax
	movl	%eax, -84(%rbp)
	leaq	-84(%rbp), %rax
	movq	%rax, %rdx
	movq	-48(%rbp), %rcx
.LEHB1:
	call	_ZN3RVOC1ERKS_
.LEHE1:
	nop
	leaq	-84(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN3RVOD1Ev
	jmp	.L8
.L7:
	movq	%rax, %rbx
	leaq	-84(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN3RVOD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB2:
	call	_Unwind_Resume
.LEHE2:
.L8:
	movq	-48(%rbp), %rax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1582:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1582-.LLSDACSB1582
.LLSDACSB1582:
	.uleb128 .LEHB0-.LFB1582
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1582
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L7-.LFB1582
	.uleb128 0
	.uleb128 .LEHB2-.LFB1582
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1582:
	.text
	.seh_endproc
	.globl	_Z6_tmainv
	.def	_Z6_tmainv;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z6_tmainv
_Z6_tmainv:
.LFB1583:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	leaq	-88(%rbp), %rax
	movq	%rax, %rcx
.LEHB3:
	call	_ZN3RVOC1Ev
.LEHE3:
	leaq	-84(%rbp), %rax
	movl	$5, %edx
	movq	%rax, %rcx
.LEHB4:
	call	_Z8MyMethodi
.LEHE4:
	movl	-84(%rbp), %eax
	movl	%eax, -88(%rbp)
	leaq	-84(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN3RVOD1Ev
	movl	$0, %ebx
	leaq	-88(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN3RVOD1Ev
	movl	%ebx, %eax
	jmp	.L13
.L12:
	movq	%rax, %rbx
	leaq	-88(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN3RVOD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
.L13:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1583:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1583-.LLSDACSB1583
.LLSDACSB1583:
	.uleb128 .LEHB3-.LFB1583
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB4-.LFB1583
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L12-.LFB1583
	.uleb128 0
	.uleb128 .LEHB5-.LFB1583
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE1583:
	.text
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2068:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2067:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L17
	cmpl	$65535, 24(%rbp)
	jne	.L17
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
.L17:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I__Z8MyMethodi;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z8MyMethodi
_GLOBAL__sub_I__Z8MyMethodi:
.LFB2069:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I__Z8MyMethodi
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
