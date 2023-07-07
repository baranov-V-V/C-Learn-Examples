	.text
	.def	@feat.00;
	.scl	3;
	.type	0;
	.endef
	.globl	@feat.00
.set @feat.00, 0
	.file	"main1.cpp"
	.def	main;
	.scl	2;
	.type	32;
	.endef
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
main:                                   # @main
.seh_proc main
# %bb.0:
	subq	$40, %rsp
	.seh_stackalloc 40
	.seh_endprologue
	movl	$0, 36(%rsp)
	movq	%rdx, 24(%rsp)
	movl	%ecx, 20(%rsp)                  # rsp + 0 = rsp
	movl	$20, 16(%rsp)                   # rsp + 16
	movl	$0, 4(%rsp)                     # rsp + 4
.LBB0_1:                                # =>This Inner Loop Header: Depth=1
	cmpl	$10, 4(%rsp)
	jge	.LBB0_4
# %bb.2:                                #   in Loop: Header=BB0_1 Depth=1
	jmp	.LBB0_3
.LBB0_3:                                #   in Loop: Header=BB0_1 Depth=1
	movl	4(%rsp), %eax
	addl	$1, %eax
	movl	%eax, 4(%rsp)
	jmp	.LBB0_1
.LBB0_4:
	xorl	%eax, %eax
	addq	$40, %rsp
	retq
	.seh_endproc
                                        # -- End function
	.addrsig
