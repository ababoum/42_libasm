Note: the info below is applicable to 64-bit architecture systems 

# 64-BIT ASM KEYWORDS INFO

## REGISTERS

- **rax**(eax, al): holds the sys_code of the syscall to be executed
- **rdi**: first argument in the syscall
- **rsi**: second argument in the syscall
- **rdx**: third argument in the syscall
- *etc.*

To use sliced parts of the register:

```
================ rax (64 bits)
        ======== eax (32 bits)
            ====  ax (16 bits)
            ==    ah (8 bits)
              ==  al (8 bits)
```

The registers can be treated as pointers. To treat a register as a pointer, we use []. Brackets "dereferences" the address stored in the register.


## POINTERS

- **rip**: points to the address of the next instruction to be executed in the control flow
- **rsp**: points to the top address of the stack
- **rbp**: points to the bottom of the stack


## INSTRUCTIONS

**syscall**: executes the function stack


## FLAGS

A flag is like a register, but it only holds 1-bit each (true or false)


## JUMPS

**jmp**: unconditional jump. Jumps to a label by loading its address into **rip**. Without **jmp**, the **rpi** increments by (1 or more) each time.

**conditonal jumps**: (signed) je, jne, jg, jge, jl, jle, jz, jnz, *etc.*
It is used after a cmp operation.


## COMPARISONS

Comparisons allow programs to be able to take different paths based on certain conditions. Comparisons are done on registers.

`syntax:`
```
cmp register, register/value
```

After a comparison is made, certain flags are set.
```
cmp a, b

a = b -> ZF = 1
a != b -> ZF = 0
...
```


## MATH OPERATIONS

The first register is the subject of the operation.

`syntax:`
```
operation register, register/value
```

Examples: add, sub, mul, div, neg, inc, dec, adc

When operating a division, make sure that rdx is set to 0. After the division operation, rdx will store the remainder value.

## STACK OPERATIONS

- **push**: pushes a value onto the stack
- **pop**: pops a value off of the stack and stores it in reg (reg being a registry or a memory position)

`syntax:`
```
push reg/value
pop reg
```

## MACROS

`syntax:`
```
%macro <name> <argc>
	...
	<macro body>
	...
%endmacro
```

### **Arguments for macros**

%1 for the first input, %2 for the second input, *etc.*

### **Local labels in macros**

Use the symbol '%%' instead of '_' inside the macro body to create a local label (it makes the label unique once the macro is expended)


## COMMAND LINES ARGUMENTS

When the program is executed, the arguments are automatically loaded onto the stack. The top item is the number of arguments.

## FUNCTION AND CALLING STANDARDS

|arch|syscall NR|return|arg0|arg1|arg2|arg3|arg4|arg5|
|----|----------|------|----|----|----|----|----|----|
|x86 |eax       |eax   |ebx |ecx |edx |esi |edi |ebp |
|x86_64|rax|rax|rdi|rsi|rdx|r10/rcx|r8|r9|

## x64 REGISTERS

|8-byte register|Bytes 0-3|Bytes 0-1|Byte 0|
|---------------|---------|---------|------|
|%rax|%eax|%ax|%al|
|%rcx|%ecx|%cx|%cl|
|%rdx|%edx|%dx|%dl|
|%rbx|%ebx|%bx|%bl|
|%rsi|%esi|%si|%sil|
|%rdi|%edi|%di|%dil|
|%rsp|%esp|%sp|%spl|
|%rbp|%ebp|%bp|%bpl|
|%r8|%r8d|%r8w|%r8b|
|%r9|%r9d|%r9w|%r9b|
|%r10|%r10d|%r10w|%r10b|
|%r11|%r11d|%r11w|%r11b|
|%r12|%r12d|%r12w|%r12b|
|%r13|%r13d|%r13w|%r13b|
|%r14|%r14d|%r14w|%r14b|
|%r15|%r15d|%r15w|%r15b|

<br><br><br>

----------
Notes taken with the help of the videos in the playlist of kupala available [here](https://www.youtube.com/watch?v=VQAKkuLL31g&list=PLetF-YjXm-sCH6FrTz4AQhfH6INDQvQSn&index=1)

More information on x86 Unix Calling convention [here](https://chromium.googlesource.com/chromiumos/docs/+/master/constants/syscalls.md)
