
;CodeVisionAVR C Compiler V2.05.0 Professional
;(C) Copyright 1998-2010 Pavel Haiduc, HP InfoTech s.r.l.
;http://www.hpinfotech.com

;Chip type                : AT90USB1286
;Program type             : Application
;Clock frequency          : 16.000000 MHz
;Memory model             : Small
;Optimize for             : Size
;(s)printf features       : int, width
;(s)scanf features        : int, width
;External RAM size        : 0
;Data Stack size          : 2048 byte(s)
;Heap size                : 0 byte(s)
;Promote 'char' to 'int'  : Yes
;'char' is unsigned       : Yes
;8 bit enums              : Yes
;global 'const' stored in FLASH: No
;Enhanced core instructions    : On
;Smart register allocation     : On
;Automatic register allocation : On

	#pragma AVRPART ADMIN PART_NAME AT90USB1286
	#pragma AVRPART MEMORY PROG_FLASH 131072
	#pragma AVRPART MEMORY EEPROM 4096
	#pragma AVRPART MEMORY INT_SRAM SIZE 8447
	#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100

	#define CALL_SUPPORTED 1

	.LISTMAC
	.EQU EERE=0x0
	.EQU EEWE=0x1
	.EQU EEMWE=0x2
	.EQU UDRE=0x5
	.EQU RXC=0x7
	.EQU EECR=0x1F
	.EQU EEDR=0x20
	.EQU EEARL=0x21
	.EQU EEARH=0x22
	.EQU SPSR=0x2D
	.EQU SPDR=0x2E
	.EQU SMCR=0x33
	.EQU MCUSR=0x34
	.EQU MCUCR=0x35
	.EQU RAMPZ=0x3B
	.EQU WDTCSR=0x60
	.EQU UCSR1A=0xC8
	.EQU UDR1=0xCE
	.EQU SPL=0x3D
	.EQU SPH=0x3E
	.EQU SREG=0x3F
	.EQU GPIOR0=0x1E

	.DEF R0X0=R0
	.DEF R0X1=R1
	.DEF R0X2=R2
	.DEF R0X3=R3
	.DEF R0X4=R4
	.DEF R0X5=R5
	.DEF R0X6=R6
	.DEF R0X7=R7
	.DEF R0X8=R8
	.DEF R0X9=R9
	.DEF R0XA=R10
	.DEF R0XB=R11
	.DEF R0XC=R12
	.DEF R0XD=R13
	.DEF R0XE=R14
	.DEF R0XF=R15
	.DEF R0X10=R16
	.DEF R0X11=R17
	.DEF R0X12=R18
	.DEF R0X13=R19
	.DEF R0X14=R20
	.DEF R0X15=R21
	.DEF R0X16=R22
	.DEF R0X17=R23
	.DEF R0X18=R24
	.DEF R0X19=R25
	.DEF R0X1A=R26
	.DEF R0X1B=R27
	.DEF R0X1C=R28
	.DEF R0X1D=R29
	.DEF R0X1E=R30
	.DEF R0X1F=R31

	.EQU __SRAM_START=0x0100
	.EQU __SRAM_END=0x20FF
	.EQU __DSTACK_SIZE=0x0800
	.EQU __HEAP_SIZE=0x0000
	.EQU __CLEAR_SRAM_SIZE=__SRAM_END-__SRAM_START+1

	.MACRO __CPD1N
	CPI  R30,LOW(@0)
	LDI  R26,HIGH(@0)
	CPC  R31,R26
	LDI  R26,BYTE3(@0)
	CPC  R22,R26
	LDI  R26,BYTE4(@0)
	CPC  R23,R26
	.ENDM

	.MACRO __CPD2N
	CPI  R26,LOW(@0)
	LDI  R30,HIGH(@0)
	CPC  R27,R30
	LDI  R30,BYTE3(@0)
	CPC  R24,R30
	LDI  R30,BYTE4(@0)
	CPC  R25,R30
	.ENDM

	.MACRO __CPWRR
	CP   R@0,R@2
	CPC  R@1,R@3
	.ENDM

	.MACRO __CPWRN
	CPI  R@0,LOW(@2)
	LDI  R30,HIGH(@2)
	CPC  R@1,R30
	.ENDM

	.MACRO __ADDB1MN
	SUBI R30,LOW(-@0-(@1))
	.ENDM

	.MACRO __ADDB2MN
	SUBI R26,LOW(-@0-(@1))
	.ENDM

	.MACRO __ADDW1MN
	SUBI R30,LOW(-@0-(@1))
	SBCI R31,HIGH(-@0-(@1))
	.ENDM

	.MACRO __ADDW2MN
	SUBI R26,LOW(-@0-(@1))
	SBCI R27,HIGH(-@0-(@1))
	.ENDM

	.MACRO __ADDW1FN
	SUBI R30,LOW(-2*@0-(@1))
	SBCI R31,HIGH(-2*@0-(@1))
	.ENDM

	.MACRO __ADDD1FN
	SUBI R30,LOW(-2*@0-(@1))
	SBCI R31,HIGH(-2*@0-(@1))
	SBCI R22,BYTE3(-2*@0-(@1))
	.ENDM

	.MACRO __ADDD1N
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	SBCI R22,BYTE3(-@0)
	SBCI R23,BYTE4(-@0)
	.ENDM

	.MACRO __ADDD2N
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	SBCI R24,BYTE3(-@0)
	SBCI R25,BYTE4(-@0)
	.ENDM

	.MACRO __SUBD1N
	SUBI R30,LOW(@0)
	SBCI R31,HIGH(@0)
	SBCI R22,BYTE3(@0)
	SBCI R23,BYTE4(@0)
	.ENDM

	.MACRO __SUBD2N
	SUBI R26,LOW(@0)
	SBCI R27,HIGH(@0)
	SBCI R24,BYTE3(@0)
	SBCI R25,BYTE4(@0)
	.ENDM

	.MACRO __ANDBMNN
	LDS  R30,@0+(@1)
	ANDI R30,LOW(@2)
	STS  @0+(@1),R30
	.ENDM

	.MACRO __ANDWMNN
	LDS  R30,@0+(@1)
	ANDI R30,LOW(@2)
	STS  @0+(@1),R30
	LDS  R30,@0+(@1)+1
	ANDI R30,HIGH(@2)
	STS  @0+(@1)+1,R30
	.ENDM

	.MACRO __ANDD1N
	ANDI R30,LOW(@0)
	ANDI R31,HIGH(@0)
	ANDI R22,BYTE3(@0)
	ANDI R23,BYTE4(@0)
	.ENDM

	.MACRO __ANDD2N
	ANDI R26,LOW(@0)
	ANDI R27,HIGH(@0)
	ANDI R24,BYTE3(@0)
	ANDI R25,BYTE4(@0)
	.ENDM

	.MACRO __ORBMNN
	LDS  R30,@0+(@1)
	ORI  R30,LOW(@2)
	STS  @0+(@1),R30
	.ENDM

	.MACRO __ORWMNN
	LDS  R30,@0+(@1)
	ORI  R30,LOW(@2)
	STS  @0+(@1),R30
	LDS  R30,@0+(@1)+1
	ORI  R30,HIGH(@2)
	STS  @0+(@1)+1,R30
	.ENDM

	.MACRO __ORD1N
	ORI  R30,LOW(@0)
	ORI  R31,HIGH(@0)
	ORI  R22,BYTE3(@0)
	ORI  R23,BYTE4(@0)
	.ENDM

	.MACRO __ORD2N
	ORI  R26,LOW(@0)
	ORI  R27,HIGH(@0)
	ORI  R24,BYTE3(@0)
	ORI  R25,BYTE4(@0)
	.ENDM

	.MACRO __DELAY_USB
	LDI  R24,LOW(@0)
__DELAY_USB_LOOP:
	DEC  R24
	BRNE __DELAY_USB_LOOP
	.ENDM

	.MACRO __DELAY_USW
	LDI  R24,LOW(@0)
	LDI  R25,HIGH(@0)
__DELAY_USW_LOOP:
	SBIW R24,1
	BRNE __DELAY_USW_LOOP
	.ENDM

	.MACRO __GETD1S
	LDD  R30,Y+@0
	LDD  R31,Y+@0+1
	LDD  R22,Y+@0+2
	LDD  R23,Y+@0+3
	.ENDM

	.MACRO __GETD2S
	LDD  R26,Y+@0
	LDD  R27,Y+@0+1
	LDD  R24,Y+@0+2
	LDD  R25,Y+@0+3
	.ENDM

	.MACRO __PUTD1S
	STD  Y+@0,R30
	STD  Y+@0+1,R31
	STD  Y+@0+2,R22
	STD  Y+@0+3,R23
	.ENDM

	.MACRO __PUTD2S
	STD  Y+@0,R26
	STD  Y+@0+1,R27
	STD  Y+@0+2,R24
	STD  Y+@0+3,R25
	.ENDM

	.MACRO __PUTDZ2
	STD  Z+@0,R26
	STD  Z+@0+1,R27
	STD  Z+@0+2,R24
	STD  Z+@0+3,R25
	.ENDM

	.MACRO __CLRD1S
	STD  Y+@0,R30
	STD  Y+@0+1,R30
	STD  Y+@0+2,R30
	STD  Y+@0+3,R30
	.ENDM

	.MACRO __POINTB1MN
	LDI  R30,LOW(@0+(@1))
	.ENDM

	.MACRO __POINTW1MN
	LDI  R30,LOW(@0+(@1))
	LDI  R31,HIGH(@0+(@1))
	.ENDM

	.MACRO __POINTD1M
	LDI  R30,LOW(@0)
	LDI  R31,HIGH(@0)
	LDI  R22,BYTE3(@0)
	LDI  R23,BYTE4(@0)
	.ENDM

	.MACRO __POINTW1FN
	LDI  R30,LOW(2*@0+(@1))
	LDI  R31,HIGH(2*@0+(@1))
	.ENDM

	.MACRO __POINTD1FN
	LDI  R30,LOW(2*@0+(@1))
	LDI  R31,HIGH(2*@0+(@1))
	LDI  R22,BYTE3(2*@0+(@1))
	LDI  R23,BYTE4(2*@0+(@1))
	.ENDM

	.MACRO __POINTB2MN
	LDI  R26,LOW(@0+(@1))
	.ENDM

	.MACRO __POINTW2MN
	LDI  R26,LOW(@0+(@1))
	LDI  R27,HIGH(@0+(@1))
	.ENDM

	.MACRO __POINTBRM
	LDI  R@0,LOW(@1)
	.ENDM

	.MACRO __POINTWRM
	LDI  R@0,LOW(@2)
	LDI  R@1,HIGH(@2)
	.ENDM

	.MACRO __POINTBRMN
	LDI  R@0,LOW(@1+(@2))
	.ENDM

	.MACRO __POINTWRMN
	LDI  R@0,LOW(@2+(@3))
	LDI  R@1,HIGH(@2+(@3))
	.ENDM

	.MACRO __POINTWRFN
	LDI  R@0,LOW(@2*2+(@3))
	LDI  R@1,HIGH(@2*2+(@3))
	.ENDM

	.MACRO __GETD1N
	LDI  R30,LOW(@0)
	LDI  R31,HIGH(@0)
	LDI  R22,BYTE3(@0)
	LDI  R23,BYTE4(@0)
	.ENDM

	.MACRO __GETD2N
	LDI  R26,LOW(@0)
	LDI  R27,HIGH(@0)
	LDI  R24,BYTE3(@0)
	LDI  R25,BYTE4(@0)
	.ENDM

	.MACRO __GETB1MN
	LDS  R30,@0+(@1)
	.ENDM

	.MACRO __GETB1HMN
	LDS  R31,@0+(@1)
	.ENDM

	.MACRO __GETW1MN
	LDS  R30,@0+(@1)
	LDS  R31,@0+(@1)+1
	.ENDM

	.MACRO __GETD1MN
	LDS  R30,@0+(@1)
	LDS  R31,@0+(@1)+1
	LDS  R22,@0+(@1)+2
	LDS  R23,@0+(@1)+3
	.ENDM

	.MACRO __GETBRMN
	LDS  R@0,@1+(@2)
	.ENDM

	.MACRO __GETWRMN
	LDS  R@0,@2+(@3)
	LDS  R@1,@2+(@3)+1
	.ENDM

	.MACRO __GETWRZ
	LDD  R@0,Z+@2
	LDD  R@1,Z+@2+1
	.ENDM

	.MACRO __GETD2Z
	LDD  R26,Z+@0
	LDD  R27,Z+@0+1
	LDD  R24,Z+@0+2
	LDD  R25,Z+@0+3
	.ENDM

	.MACRO __GETB2MN
	LDS  R26,@0+(@1)
	.ENDM

	.MACRO __GETW2MN
	LDS  R26,@0+(@1)
	LDS  R27,@0+(@1)+1
	.ENDM

	.MACRO __GETD2MN
	LDS  R26,@0+(@1)
	LDS  R27,@0+(@1)+1
	LDS  R24,@0+(@1)+2
	LDS  R25,@0+(@1)+3
	.ENDM

	.MACRO __PUTB1MN
	STS  @0+(@1),R30
	.ENDM

	.MACRO __PUTW1MN
	STS  @0+(@1),R30
	STS  @0+(@1)+1,R31
	.ENDM

	.MACRO __PUTD1MN
	STS  @0+(@1),R30
	STS  @0+(@1)+1,R31
	STS  @0+(@1)+2,R22
	STS  @0+(@1)+3,R23
	.ENDM

	.MACRO __PUTB1EN
	LDI  R26,LOW(@0+(@1))
	LDI  R27,HIGH(@0+(@1))
	CALL __EEPROMWRB
	.ENDM

	.MACRO __PUTW1EN
	LDI  R26,LOW(@0+(@1))
	LDI  R27,HIGH(@0+(@1))
	CALL __EEPROMWRW
	.ENDM

	.MACRO __PUTD1EN
	LDI  R26,LOW(@0+(@1))
	LDI  R27,HIGH(@0+(@1))
	CALL __EEPROMWRD
	.ENDM

	.MACRO __PUTBR0MN
	STS  @0+(@1),R0
	.ENDM

	.MACRO __PUTBMRN
	STS  @0+(@1),R@2
	.ENDM

	.MACRO __PUTWMRN
	STS  @0+(@1),R@2
	STS  @0+(@1)+1,R@3
	.ENDM

	.MACRO __PUTBZR
	STD  Z+@1,R@0
	.ENDM

	.MACRO __PUTWZR
	STD  Z+@2,R@0
	STD  Z+@2+1,R@1
	.ENDM

	.MACRO __GETW1R
	MOV  R30,R@0
	MOV  R31,R@1
	.ENDM

	.MACRO __GETW2R
	MOV  R26,R@0
	MOV  R27,R@1
	.ENDM

	.MACRO __GETWRN
	LDI  R@0,LOW(@2)
	LDI  R@1,HIGH(@2)
	.ENDM

	.MACRO __PUTW1R
	MOV  R@0,R30
	MOV  R@1,R31
	.ENDM

	.MACRO __PUTW2R
	MOV  R@0,R26
	MOV  R@1,R27
	.ENDM

	.MACRO __ADDWRN
	SUBI R@0,LOW(-@2)
	SBCI R@1,HIGH(-@2)
	.ENDM

	.MACRO __ADDWRR
	ADD  R@0,R@2
	ADC  R@1,R@3
	.ENDM

	.MACRO __SUBWRN
	SUBI R@0,LOW(@2)
	SBCI R@1,HIGH(@2)
	.ENDM

	.MACRO __SUBWRR
	SUB  R@0,R@2
	SBC  R@1,R@3
	.ENDM

	.MACRO __ANDWRN
	ANDI R@0,LOW(@2)
	ANDI R@1,HIGH(@2)
	.ENDM

	.MACRO __ANDWRR
	AND  R@0,R@2
	AND  R@1,R@3
	.ENDM

	.MACRO __ORWRN
	ORI  R@0,LOW(@2)
	ORI  R@1,HIGH(@2)
	.ENDM

	.MACRO __ORWRR
	OR   R@0,R@2
	OR   R@1,R@3
	.ENDM

	.MACRO __EORWRR
	EOR  R@0,R@2
	EOR  R@1,R@3
	.ENDM

	.MACRO __GETWRS
	LDD  R@0,Y+@2
	LDD  R@1,Y+@2+1
	.ENDM

	.MACRO __PUTBSR
	STD  Y+@1,R@0
	.ENDM

	.MACRO __PUTWSR
	STD  Y+@2,R@0
	STD  Y+@2+1,R@1
	.ENDM

	.MACRO __MOVEWRR
	MOV  R@0,R@2
	MOV  R@1,R@3
	.ENDM

	.MACRO __INWR
	IN   R@0,@2
	IN   R@1,@2+1
	.ENDM

	.MACRO __OUTWR
	OUT  @2+1,R@1
	OUT  @2,R@0
	.ENDM

	.MACRO __CALL1MN
	LDS  R30,@0+(@1)
	LDS  R31,@0+(@1)+1
	ICALL
	.ENDM

	.MACRO __CALL1FN
	LDI  R30,LOW(2*@0+(@1))
	LDI  R31,HIGH(2*@0+(@1))
	CALL __GETW1PF
	ICALL
	.ENDM

	.MACRO __CALL2EN
	LDI  R26,LOW(@0+(@1))
	LDI  R27,HIGH(@0+(@1))
	CALL __EEPROMRDW
	ICALL
	.ENDM

	.MACRO __GETW1STACK
	IN   R26,SPL
	IN   R27,SPH
	ADIW R26,@0+1
	LD   R30,X+
	LD   R31,X
	.ENDM

	.MACRO __GETD1STACK
	IN   R26,SPL
	IN   R27,SPH
	ADIW R26,@0+1
	LD   R30,X+
	LD   R31,X+
	LD   R22,X
	.ENDM

	.MACRO __NBST
	BST  R@0,@1
	IN   R30,SREG
	LDI  R31,0x40
	EOR  R30,R31
	OUT  SREG,R30
	.ENDM


	.MACRO __PUTB1SN
	LDD  R26,Y+@0
	LDD  R27,Y+@0+1
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X,R30
	.ENDM

	.MACRO __PUTW1SN
	LDD  R26,Y+@0
	LDD  R27,Y+@0+1
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1SN
	LDD  R26,Y+@0
	LDD  R27,Y+@0+1
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	CALL __PUTDP1
	.ENDM

	.MACRO __PUTB1SNS
	LDD  R26,Y+@0
	LDD  R27,Y+@0+1
	ADIW R26,@1
	ST   X,R30
	.ENDM

	.MACRO __PUTW1SNS
	LDD  R26,Y+@0
	LDD  R27,Y+@0+1
	ADIW R26,@1
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1SNS
	LDD  R26,Y+@0
	LDD  R27,Y+@0+1
	ADIW R26,@1
	CALL __PUTDP1
	.ENDM

	.MACRO __PUTB1PMN
	LDS  R26,@0
	LDS  R27,@0+1
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X,R30
	.ENDM

	.MACRO __PUTW1PMN
	LDS  R26,@0
	LDS  R27,@0+1
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1PMN
	LDS  R26,@0
	LDS  R27,@0+1
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	CALL __PUTDP1
	.ENDM

	.MACRO __PUTB1PMNS
	LDS  R26,@0
	LDS  R27,@0+1
	ADIW R26,@1
	ST   X,R30
	.ENDM

	.MACRO __PUTW1PMNS
	LDS  R26,@0
	LDS  R27,@0+1
	ADIW R26,@1
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1PMNS
	LDS  R26,@0
	LDS  R27,@0+1
	ADIW R26,@1
	CALL __PUTDP1
	.ENDM

	.MACRO __PUTB1RN
	MOVW R26,R@0
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X,R30
	.ENDM

	.MACRO __PUTW1RN
	MOVW R26,R@0
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1RN
	MOVW R26,R@0
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	CALL __PUTDP1
	.ENDM

	.MACRO __PUTB1RNS
	MOVW R26,R@0
	ADIW R26,@1
	ST   X,R30
	.ENDM

	.MACRO __PUTW1RNS
	MOVW R26,R@0
	ADIW R26,@1
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1RNS
	MOVW R26,R@0
	ADIW R26,@1
	CALL __PUTDP1
	.ENDM

	.MACRO __PUTB1RON
	MOV  R26,R@0
	MOV  R27,R@1
	SUBI R26,LOW(-@2)
	SBCI R27,HIGH(-@2)
	ST   X,R30
	.ENDM

	.MACRO __PUTW1RON
	MOV  R26,R@0
	MOV  R27,R@1
	SUBI R26,LOW(-@2)
	SBCI R27,HIGH(-@2)
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1RON
	MOV  R26,R@0
	MOV  R27,R@1
	SUBI R26,LOW(-@2)
	SBCI R27,HIGH(-@2)
	CALL __PUTDP1
	.ENDM

	.MACRO __PUTB1RONS
	MOV  R26,R@0
	MOV  R27,R@1
	ADIW R26,@2
	ST   X,R30
	.ENDM

	.MACRO __PUTW1RONS
	MOV  R26,R@0
	MOV  R27,R@1
	ADIW R26,@2
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1RONS
	MOV  R26,R@0
	MOV  R27,R@1
	ADIW R26,@2
	CALL __PUTDP1
	.ENDM


	.MACRO __GETB1SX
	MOVW R30,R28
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	LD   R30,Z
	.ENDM

	.MACRO __GETB1HSX
	MOVW R30,R28
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	LD   R31,Z
	.ENDM

	.MACRO __GETW1SX
	MOVW R30,R28
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	LD   R0,Z+
	LD   R31,Z
	MOV  R30,R0
	.ENDM

	.MACRO __GETD1SX
	MOVW R30,R28
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	LD   R0,Z+
	LD   R1,Z+
	LD   R22,Z+
	LD   R23,Z
	MOVW R30,R0
	.ENDM

	.MACRO __GETB2SX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	LD   R26,X
	.ENDM

	.MACRO __GETW2SX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	LD   R0,X+
	LD   R27,X
	MOV  R26,R0
	.ENDM

	.MACRO __GETD2SX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	LD   R0,X+
	LD   R1,X+
	LD   R24,X+
	LD   R25,X
	MOVW R26,R0
	.ENDM

	.MACRO __GETBRSX
	MOVW R30,R28
	SUBI R30,LOW(-@1)
	SBCI R31,HIGH(-@1)
	LD   R@0,Z
	.ENDM

	.MACRO __GETWRSX
	MOVW R30,R28
	SUBI R30,LOW(-@2)
	SBCI R31,HIGH(-@2)
	LD   R@0,Z+
	LD   R@1,Z
	.ENDM

	.MACRO __GETBRSX2
	MOVW R26,R28
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	LD   R@0,X
	.ENDM

	.MACRO __GETWRSX2
	MOVW R26,R28
	SUBI R26,LOW(-@2)
	SBCI R27,HIGH(-@2)
	LD   R@0,X+
	LD   R@1,X
	.ENDM

	.MACRO __LSLW8SX
	MOVW R30,R28
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	LD   R31,Z
	CLR  R30
	.ENDM

	.MACRO __PUTB1SX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	ST   X,R30
	.ENDM

	.MACRO __PUTW1SX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1SX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	ST   X+,R30
	ST   X+,R31
	ST   X+,R22
	ST   X,R23
	.ENDM

	.MACRO __CLRW1SX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	ST   X+,R30
	ST   X,R30
	.ENDM

	.MACRO __CLRD1SX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	ST   X+,R30
	ST   X+,R30
	ST   X+,R30
	ST   X,R30
	.ENDM

	.MACRO __PUTB2SX
	MOVW R30,R28
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	ST   Z,R26
	.ENDM

	.MACRO __PUTW2SX
	MOVW R30,R28
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	ST   Z+,R26
	ST   Z,R27
	.ENDM

	.MACRO __PUTD2SX
	MOVW R30,R28
	SUBI R30,LOW(-@0)
	SBCI R31,HIGH(-@0)
	ST   Z+,R26
	ST   Z+,R27
	ST   Z+,R24
	ST   Z,R25
	.ENDM

	.MACRO __PUTBSRX
	MOVW R30,R28
	SUBI R30,LOW(-@1)
	SBCI R31,HIGH(-@1)
	ST   Z,R@0
	.ENDM

	.MACRO __PUTWSRX
	MOVW R30,R28
	SUBI R30,LOW(-@2)
	SBCI R31,HIGH(-@2)
	ST   Z+,R@0
	ST   Z,R@1
	.ENDM

	.MACRO __PUTB1SNX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	LD   R0,X+
	LD   R27,X
	MOV  R26,R0
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X,R30
	.ENDM

	.MACRO __PUTW1SNX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	LD   R0,X+
	LD   R27,X
	MOV  R26,R0
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X+,R30
	ST   X,R31
	.ENDM

	.MACRO __PUTD1SNX
	MOVW R26,R28
	SUBI R26,LOW(-@0)
	SBCI R27,HIGH(-@0)
	LD   R0,X+
	LD   R27,X
	MOV  R26,R0
	SUBI R26,LOW(-@1)
	SBCI R27,HIGH(-@1)
	ST   X+,R30
	ST   X+,R31
	ST   X+,R22
	ST   X,R23
	.ENDM

	.MACRO __MULBRR
	MULS R@0,R@1
	MOVW R30,R0
	.ENDM

	.MACRO __MULBRRU
	MUL  R@0,R@1
	MOVW R30,R0
	.ENDM

	.MACRO __MULBRR0
	MULS R@0,R@1
	.ENDM

	.MACRO __MULBRRU0
	MUL  R@0,R@1
	.ENDM

	.MACRO __MULBNWRU
	LDI  R26,@2
	MUL  R26,R@0
	MOVW R30,R0
	MUL  R26,R@1
	ADD  R31,R0
	.ENDM

;NAME DEFINITIONS FOR GLOBAL VARIABLES ALLOCATED TO REGISTERS
	.DEF _i=R3
	.DEF _k=R5
	.DEF _l=R7
	.DEF _j=R9
	.DEF _lpwm=R11
	.DEF _rpwm=R13

;GPIOR0 INITIALIZATION VALUE
	.EQU __GPIOR0_INIT=0x00

	.CSEG
	.ORG 0x00

;START OF CODE MARKER
__START_OF_CODE:

;INTERRUPT VECTORS
	JMP  __RESET
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00
	JMP  0x00

_tbl10_G100:
	.DB  0x10,0x27,0xE8,0x3,0x64,0x0,0xA,0x0
	.DB  0x1,0x0
_tbl16_G100:
	.DB  0x0,0x10,0x0,0x1,0x10,0x0,0x1,0x0

_0xD3:
	.DB  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
_0x0:
	.DB  0x52,0x6F,0x62,0x6F,0x74,0x20,0x31,0x2C
	.DB  0x20,0x72,0x65,0x61,0x64,0x79,0x2E,0x2E
	.DB  0x0,0xA,0x50,0x57,0x4D,0x20,0x6B,0x61
	.DB  0x6E,0x61,0x6E,0x3A,0x20,0x0,0x25,0x64
	.DB  0xA,0x0,0x50,0x57,0x4D,0x20,0x6B,0x69
	.DB  0x72,0x69,0x3A,0x20,0x0,0x6B,0x20,0x3D
	.DB  0x20,0x25,0x64,0x20,0x0,0x6C,0x20,0x3D
	.DB  0x20,0x25,0x64,0x20,0x0
_0x2040060:
	.DB  0x1
_0x2040000:
	.DB  0x2D,0x4E,0x41,0x4E,0x0,0x49,0x4E,0x46
	.DB  0x0

__GLOBAL_INI_TBL:
	.DW  0x08
	.DW  0x03
	.DW  _0xD3*2

	.DW  0x01
	.DW  __seed_G102
	.DW  _0x2040060*2

_0xFFFFFFFF:
	.DW  0

__RESET:
	CLI
	CLR  R30
	OUT  EECR,R30

;INTERRUPT VECTORS ARE PLACED
;AT THE START OF FLASH
	LDI  R31,1
	OUT  MCUCR,R31
	OUT  MCUCR,R30

;DISABLE WATCHDOG
	LDI  R31,0x18
	WDR
	IN   R26,MCUSR
	CBR  R26,8
	OUT  MCUSR,R26
	STS  WDTCSR,R31
	STS  WDTCSR,R30

;CLEAR R2-R14
	LDI  R24,(14-2)+1
	LDI  R26,2
	CLR  R27
__CLEAR_REG:
	ST   X+,R30
	DEC  R24
	BRNE __CLEAR_REG

;CLEAR SRAM
	LDI  R24,LOW(__CLEAR_SRAM_SIZE)
	LDI  R25,HIGH(__CLEAR_SRAM_SIZE)
	LDI  R26,LOW(__SRAM_START)
	LDI  R27,HIGH(__SRAM_START)
__CLEAR_SRAM:
	ST   X+,R30
	SBIW R24,1
	BRNE __CLEAR_SRAM

;GLOBAL VARIABLES INITIALIZATION
	LDI  R30,LOW(__GLOBAL_INI_TBL*2)
	LDI  R31,HIGH(__GLOBAL_INI_TBL*2)
__GLOBAL_INI_NEXT:
	LPM  R24,Z+
	LPM  R25,Z+
	SBIW R24,0
	BREQ __GLOBAL_INI_END
	LPM  R26,Z+
	LPM  R27,Z+
	LPM  R0,Z+
	LPM  R1,Z+
	MOVW R22,R30
	MOVW R30,R0
__GLOBAL_INI_LOOP:
	LPM  R0,Z+
	ST   X+,R0
	SBIW R24,1
	BRNE __GLOBAL_INI_LOOP
	MOVW R30,R22
	RJMP __GLOBAL_INI_NEXT
__GLOBAL_INI_END:

	OUT  RAMPZ,R24

;GPIOR0 INITIALIZATION
	LDI  R30,__GPIOR0_INIT
	OUT  GPIOR0,R30

;HARDWARE STACK POINTER INITIALIZATION
	LDI  R30,LOW(__SRAM_END-__HEAP_SIZE)
	OUT  SPL,R30
	LDI  R30,HIGH(__SRAM_END-__HEAP_SIZE)
	OUT  SPH,R30

;DATA STACK POINTER INITIALIZATION
	LDI  R28,LOW(__SRAM_START+__DSTACK_SIZE)
	LDI  R29,HIGH(__SRAM_START+__DSTACK_SIZE)

	JMP  _main

	.ESEG
	.ORG 0

	.DSEG
	.ORG 0x900

	.CSEG
;/*****************************************************
;This program was produced by the
;CodeWizardAVR V2.03.9 Standard
;Automatic Program Generator
;© Copyright 1998-2008 Pavel Haiduc, HP InfoTech s.r.l.
;http://www.hpinfotech.com
;
;Project :
;Version :
;Date    : 7/28/2012
;Author  : Yahya
;Company :
;Comments:
;
;
;Chip type               : AT90USB1286
;Program type            : Application
;AVR Core Clock frequency: 16.000000 MHz
;Memory model            : Small
;External RAM size       : 0
;Data Stack size         : 2048
;*****************************************************/
;
;#include <90usb1286.h>
	#ifndef __SLEEP_DEFINED__
	#define __SLEEP_DEFINED__
	.EQU __se_bit=0x01
	.EQU __sm_mask=0x0E
	.EQU __sm_powerdown=0x04
	.EQU __sm_powersave=0x06
	.EQU __sm_standby=0x0C
	.EQU __sm_ext_standby=0x0E
	.EQU __sm_adc_noise_red=0x02
	.SET power_ctrl_reg=smcr
	#endif
;// Standard Input/Output functions
;#include <stdio.h>
;#include <delay.h>
;#include <string.h>
;#include <stdlib.h>
;
;
;// Declare your global variables here
;  int i = 0, k=0,l=0;
;  int j = 0;
;  int lpwm, rpwm;
;  char data, speed[15];
;
;
;int konversi (char p)
; 0000 0028 {

	.CSEG
_konversi:
; 0000 0029     int k=0;
; 0000 002A     if(p=='0')
	ST   -Y,R17
	ST   -Y,R16
;	p -> Y+2
;	k -> R16,R17
	__GETWRN 16,17,0
	LDD  R26,Y+2
	CPI  R26,LOW(0x30)
	BRNE _0x3
; 0000 002B         k=0;
	__GETWRN 16,17,0
; 0000 002C     if(p=='1')
_0x3:
	LDD  R26,Y+2
	CPI  R26,LOW(0x31)
	BRNE _0x4
; 0000 002D         k=1;
	__GETWRN 16,17,1
; 0000 002E     if(p=='2')
_0x4:
	LDD  R26,Y+2
	CPI  R26,LOW(0x32)
	BRNE _0x5
; 0000 002F         k=2;
	__GETWRN 16,17,2
; 0000 0030     if(p=='3')
_0x5:
	LDD  R26,Y+2
	CPI  R26,LOW(0x33)
	BRNE _0x6
; 0000 0031         k=3;
	__GETWRN 16,17,3
; 0000 0032     if(p=='4')
_0x6:
	LDD  R26,Y+2
	CPI  R26,LOW(0x34)
	BRNE _0x7
; 0000 0033         k=4;
	__GETWRN 16,17,4
; 0000 0034     if(p=='5')
_0x7:
	LDD  R26,Y+2
	CPI  R26,LOW(0x35)
	BRNE _0x8
; 0000 0035         k=5;
	__GETWRN 16,17,5
; 0000 0036     if(p=='6')
_0x8:
	LDD  R26,Y+2
	CPI  R26,LOW(0x36)
	BRNE _0x9
; 0000 0037         k=6;
	__GETWRN 16,17,6
; 0000 0038     if(p=='7')
_0x9:
	LDD  R26,Y+2
	CPI  R26,LOW(0x37)
	BRNE _0xA
; 0000 0039         k=7;
	__GETWRN 16,17,7
; 0000 003A     if(p=='8')
_0xA:
	LDD  R26,Y+2
	CPI  R26,LOW(0x38)
	BRNE _0xB
; 0000 003B         k=8;
	__GETWRN 16,17,8
; 0000 003C     if(p=='9')
_0xB:
	LDD  R26,Y+2
	CPI  R26,LOW(0x39)
	BRNE _0xC
; 0000 003D         k=9;
	__GETWRN 16,17,9
; 0000 003E 
; 0000 003F     return k;
_0xC:
	MOVW R30,R16
	LDD  R17,Y+1
	LDD  R16,Y+0
	RJMP _0x20A0001
; 0000 0040 }
;
;
;void gerak_robot(char kanan, char kiri, int RPWM, int LPWM)
; 0000 0044 {
_gerak_robot:
; 0000 0045  if (kanan == '+')
;	kanan -> Y+5
;	kiri -> Y+4
;	RPWM -> Y+2
;	LPWM -> Y+0
	LDD  R26,Y+5
	CPI  R26,LOW(0x2B)
	BRNE _0xD
; 0000 0046  {
; 0000 0047     if (kiri == '+')  //maju
	LDD  R26,Y+4
	CPI  R26,LOW(0x2B)
	BRNE _0xE
; 0000 0048     {
; 0000 0049         PORTB.4 = 1;
	CALL SUBOPT_0x0
; 0000 004A         PORTB.5 = 0;
; 0000 004B         PORTB.6 = 0;
; 0000 004C         PORTB.7 = 1;
; 0000 004D         OCR3AH=0x00;//data1;
; 0000 004E         OCR3AL=LPWM;//data1    motor kiri
	CALL SUBOPT_0x1
; 0000 004F         OCR3BH=0x00;//data1;
; 0000 0050         OCR3BL=RPWM;//data1;     motor kanan
; 0000 0051         delay_ms(30);
; 0000 0052 
; 0000 0053         /*PORTB.4 = 0;
; 0000 0054         PORTB.5 = 1;
; 0000 0055         PORTB.6 = 1;
; 0000 0056         PORTB.7 = 0;
; 0000 0057         OCR3AH=0x00;//data1;
; 0000 0058         OCR3AL=100;//data1;
; 0000 0059         OCR3AH=0x00;//data1;
; 0000 005A         OCR3AL=100;//data1;
; 0000 005B         delay_ms(5);
; 0000 005C         */
; 0000 005D         PORTB.4 = 1;
; 0000 005E         PORTB.5 = 1;
; 0000 005F         PORTB.6 = 1;
; 0000 0060         PORTB.7 = 1;
; 0000 0061     }
; 0000 0062 
; 0000 0063     if (kiri == '-')  //putar kiri
_0xE:
	LDD  R26,Y+4
	CPI  R26,LOW(0x2D)
	BRNE _0x1F
; 0000 0064     {
; 0000 0065         PORTB.4 = 1;
	CALL SUBOPT_0x2
; 0000 0066         PORTB.5 = 0;
; 0000 0067         PORTB.6 = 1;
; 0000 0068         PORTB.7 = 0;
; 0000 0069         OCR3AH=0x00;//data1;
; 0000 006A         OCR3AL=LPWM;//data1    motor kiri
	CALL SUBOPT_0x1
; 0000 006B         OCR3BH=0x00;//data1;
; 0000 006C         OCR3BL=RPWM;//data1;     motor kanan
; 0000 006D         delay_ms(30);
; 0000 006E 
; 0000 006F         /*PORTB.4 = 0;
; 0000 0070         PORTB.5 = 1;
; 0000 0071         PORTB.6 = 1;
; 0000 0072         PORTB.7 = 0;
; 0000 0073         OCR3AH=0x00;//data1;
; 0000 0074         OCR3AL=100;//data1;
; 0000 0075         OCR3AH=0x00;//data1;
; 0000 0076         OCR3AL=100;//data1;
; 0000 0077         delay_ms(5);
; 0000 0078         */
; 0000 0079         PORTB.4 = 1;
; 0000 007A         PORTB.5 = 1;
; 0000 007B         PORTB.6 = 1;
; 0000 007C         PORTB.7 = 1;
; 0000 007D     }
; 0000 007E  }
_0x1F:
; 0000 007F  else
	RJMP _0x30
_0xD:
; 0000 0080  {
; 0000 0081     if (kiri == '+')  //putar kanan
	LDD  R26,Y+4
	CPI  R26,LOW(0x2B)
	BRNE _0x31
; 0000 0082     {
; 0000 0083         PORTB.4 = 0;
	CALL SUBOPT_0x3
; 0000 0084         PORTB.5 = 1;
; 0000 0085         PORTB.6 = 0;
; 0000 0086         PORTB.7 = 1;
; 0000 0087         OCR3AH=0x00;//data1;
; 0000 0088         OCR3AL=LPWM;//data1    motor kiri
	CALL SUBOPT_0x1
; 0000 0089         OCR3BH=0x00;//data1;
; 0000 008A         OCR3BL=RPWM;//data1;     motor kanan
; 0000 008B         delay_ms(30);
; 0000 008C 
; 0000 008D         /*PORTB.4 = 0;
; 0000 008E         PORTB.5 = 1;
; 0000 008F         PORTB.6 = 1;
; 0000 0090         PORTB.7 = 0;
; 0000 0091         OCR3AH=0x00;//data1;
; 0000 0092         OCR3AL=100;//data1;
; 0000 0093         OCR3AH=0x00;//data1;
; 0000 0094         OCR3AL=100;//data1;
; 0000 0095         delay_ms(5);
; 0000 0096         */
; 0000 0097         PORTB.4 = 1;
; 0000 0098         PORTB.5 = 1;
; 0000 0099         PORTB.6 = 1;
; 0000 009A         PORTB.7 = 1;
; 0000 009B     }
; 0000 009C 
; 0000 009D     if (kiri == '-')  //mundur
_0x31:
	LDD  R26,Y+4
	CPI  R26,LOW(0x2D)
	BRNE _0x42
; 0000 009E     {
; 0000 009F         PORTB.4 = 0;
	CALL SUBOPT_0x4
; 0000 00A0         PORTB.5 = 1;
; 0000 00A1         PORTB.6 = 1;
; 0000 00A2         PORTB.7 = 0;
; 0000 00A3         OCR3AH=0x00;//data1;
; 0000 00A4         OCR3AL=LPWM;//data1    motor kiri
	CALL SUBOPT_0x1
; 0000 00A5         OCR3BH=0x00;//data1;
; 0000 00A6         OCR3BL=RPWM;//data1;     motor kanan
; 0000 00A7         delay_ms(30);
; 0000 00A8 
; 0000 00A9         /*PORTB.4 = 0;
; 0000 00AA         PORTB.5 = 1;
; 0000 00AB         PORTB.6 = 1;
; 0000 00AC         PORTB.7 = 0;
; 0000 00AD         OCR3AH=0x00;//data1;
; 0000 00AE         OCR3AL=100;//data1;
; 0000 00AF         OCR3AH=0x00;//data1;
; 0000 00B0         OCR3AL=100;//data1;
; 0000 00B1         delay_ms(5);
; 0000 00B2         */
; 0000 00B3         PORTB.4 = 1;
; 0000 00B4         PORTB.5 = 1;
; 0000 00B5         PORTB.6 = 1;
; 0000 00B6         PORTB.7 = 1;
; 0000 00B7     }
; 0000 00B8  }
_0x42:
_0x30:
; 0000 00B9 }
	ADIW R28,6
	RET
;
;
;void main(void)
; 0000 00BD {
_main:
; 0000 00BE // Declare your local variables here
; 0000 00BF 
; 0000 00C0 // Crystal Oscillator division factor: 1
; 0000 00C1 #pragma optsize-
; 0000 00C2 CLKPR=0x80;
	LDI  R30,LOW(128)
	STS  97,R30
; 0000 00C3 CLKPR=0x00;
	LDI  R30,LOW(0)
	STS  97,R30
; 0000 00C4 #ifdef _OPTIMIZE_SIZE_
; 0000 00C5 #pragma optsize+
; 0000 00C6 #endif
; 0000 00C7 
; 0000 00C8 // Input/Output Ports initialization
; 0000 00C9 // Port A initialization
; 0000 00CA // Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In
; 0000 00CB // State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T
; 0000 00CC PORTA=0x00;
	OUT  0x2,R30
; 0000 00CD DDRA=0x00;
	OUT  0x1,R30
; 0000 00CE 
; 0000 00CF // Port B initialization
; 0000 00D0 // Func7=Out Func6=Out Func5=Out Func4=Out Func3=In Func2=In Func1=In Func0=In
; 0000 00D1 // State7=0 State6=0 State5=0 State4=0 State3=T State2=T State1=T State0=T
; 0000 00D2 PORTB=0x00;
	OUT  0x5,R30
; 0000 00D3 DDRB=0xF0;
	LDI  R30,LOW(240)
	OUT  0x4,R30
; 0000 00D4 
; 0000 00D5 // Port C initialization
; 0000 00D6 // Func7=Out Func6=Out Func5=Out Func4=Out Func3=In Func2=In Func1=In Func0=In
; 0000 00D7 // State7=0 State6=0 State5=0 State4=0 State3=T State2=T State1=T State0=T
; 0000 00D8 PORTC=0x00;
	LDI  R30,LOW(0)
	OUT  0x8,R30
; 0000 00D9 DDRC=0xF0;
	LDI  R30,LOW(240)
	OUT  0x7,R30
; 0000 00DA 
; 0000 00DB // Port D initialization
; 0000 00DC // Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In
; 0000 00DD // State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T
; 0000 00DE PORTD=0x00;
	LDI  R30,LOW(0)
	OUT  0xB,R30
; 0000 00DF DDRD=0x00;
	OUT  0xA,R30
; 0000 00E0 
; 0000 00E1 // Port E initialization
; 0000 00E2 // Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In
; 0000 00E3 // State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T
; 0000 00E4 PORTE=0x00;
	OUT  0xE,R30
; 0000 00E5 DDRE=0x00;
	OUT  0xD,R30
; 0000 00E6 
; 0000 00E7 // Port F initialization
; 0000 00E8 // Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In
; 0000 00E9 // State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T
; 0000 00EA PORTF=0x00;
	OUT  0x11,R30
; 0000 00EB DDRF=0x00;
	OUT  0x10,R30
; 0000 00EC 
; 0000 00ED // Timer/Counter 0 initialization
; 0000 00EE // Clock source: System Clock
; 0000 00EF // Clock value: Timer 0 Stopped
; 0000 00F0 // Mode: Normal top=FFh
; 0000 00F1 // OC0A output: Disconnected
; 0000 00F2 // OC0B output: Disconnected
; 0000 00F3 TCCR0A=0x00;
	OUT  0x24,R30
; 0000 00F4 TCCR0B=0x00;
	OUT  0x25,R30
; 0000 00F5 TCNT0=0x00;
	OUT  0x26,R30
; 0000 00F6 OCR0A=0x00;
	OUT  0x27,R30
; 0000 00F7 OCR0B=0x00;
	OUT  0x28,R30
; 0000 00F8 
; 0000 00F9 // Timer/Counter 1 initialization
; 0000 00FA // Clock source: System Clock
; 0000 00FB // Clock value: Timer 1 Stopped
; 0000 00FC // Mode: Normal top=FFFFh
; 0000 00FD // OC1A output: Discon.
; 0000 00FE // OC1B output: Discon.
; 0000 00FF // OC1C output: Discon.
; 0000 0100 // Noise Canceler: Off
; 0000 0101 // Input Capture on Falling Edge
; 0000 0102 // Timer 1 Overflow Interrupt: Off
; 0000 0103 // Input Capture Interrupt: Off
; 0000 0104 // Compare A Match Interrupt: Off
; 0000 0105 // Compare B Match Interrupt: Off
; 0000 0106 // Compare C Match Interrupt: Off
; 0000 0107 TCCR1A=0x00;
	STS  128,R30
; 0000 0108 TCCR1B=0x00;
	STS  129,R30
; 0000 0109 TCNT1H=0x00;
	STS  133,R30
; 0000 010A TCNT1L=0x00;
	STS  132,R30
; 0000 010B ICR1H=0x00;
	STS  135,R30
; 0000 010C ICR1L=0x00;
	STS  134,R30
; 0000 010D OCR1AH=0x00;
	STS  137,R30
; 0000 010E OCR1AL=0x00;
	STS  136,R30
; 0000 010F OCR1BH=0x00;
	STS  139,R30
; 0000 0110 OCR1BL=0x00;
	STS  138,R30
; 0000 0111 OCR1CH=0x00;
	STS  141,R30
; 0000 0112 OCR1CL=0x00;
	STS  140,R30
; 0000 0113 
; 0000 0114 // Timer/Counter 2 initialization
; 0000 0115 // Clock source: System Clock
; 0000 0116 // Clock value: Timer 2 Stopped
; 0000 0117 // Mode: Normal top=FFh
; 0000 0118 // OC2A output: Disconnected
; 0000 0119 // OC2B output: Disconnected
; 0000 011A ASSR=0x00;
	STS  182,R30
; 0000 011B TCCR2A=0x00;
	STS  176,R30
; 0000 011C TCCR2B=0x00;
	STS  177,R30
; 0000 011D TCNT2=0x00;
	STS  178,R30
; 0000 011E OCR2A=0x00;
	STS  179,R30
; 0000 011F OCR2B=0x00;
	STS  180,R30
; 0000 0120 
; 0000 0121 // Timer/Counter 3 initialization
; 0000 0122 // Clock source: System Clock
; 0000 0123 // Clock value: 62.500 kHz
; 0000 0124 // Mode: Fast PWM top=03FFh
; 0000 0125 // OC3A output: Non-Inv.
; 0000 0126 // OC3B output: Discon.
; 0000 0127 // OC3C output: Discon.
; 0000 0128 // Noise Canceler: Off
; 0000 0129 // Input Capture on Falling Edge
; 0000 012A // Timer 3 Overflow Interrupt: Off
; 0000 012B // Input Capture Interrupt: Off
; 0000 012C // Compare A Match Interrupt: Off
; 0000 012D // Compare B Match Interrupt: Off
; 0000 012E // Compare C Match Interrupt: Off
; 0000 012F TCCR3A=0xA3;
	LDI  R30,LOW(163)
	STS  144,R30
; 0000 0130 TCCR3B=0x0C;
	LDI  R30,LOW(12)
	STS  145,R30
; 0000 0131 TCNT3H=0x00;
	LDI  R30,LOW(0)
	STS  149,R30
; 0000 0132 TCNT3L=0x00;
	STS  148,R30
; 0000 0133 ICR3H=0x00;
	STS  151,R30
; 0000 0134 ICR3L=0x00;
	STS  150,R30
; 0000 0135 OCR3AH=0x00;
	STS  153,R30
; 0000 0136 OCR3AL=0x00;
	CALL SUBOPT_0x5
; 0000 0137 OCR3BH=0x00;
; 0000 0138 OCR3BL=0x00;
	LDI  R30,LOW(0)
	STS  154,R30
; 0000 0139 OCR3CH=0x00;
	STS  157,R30
; 0000 013A OCR3CL=0x00;
	STS  156,R30
; 0000 013B 
; 0000 013C // External Interrupt(s) initialization
; 0000 013D // INT0: Off
; 0000 013E // INT1: Off
; 0000 013F // INT2: Off
; 0000 0140 // INT3: Off
; 0000 0141 // INT4: Off
; 0000 0142 // INT5: Off
; 0000 0143 // INT6: Off
; 0000 0144 // INT7: Off
; 0000 0145 EICRA=0x00;
	STS  105,R30
; 0000 0146 EICRB=0x00;
	STS  106,R30
; 0000 0147 EIMSK=0x00;
	OUT  0x1D,R30
; 0000 0148 // PCINT0 interrupt: Off
; 0000 0149 // PCINT1 interrupt: Off
; 0000 014A // PCINT2 interrupt: Off
; 0000 014B // PCINT3 interrupt: Off
; 0000 014C // PCINT4 interrupt: Off
; 0000 014D // PCINT5 interrupt: Off
; 0000 014E // PCINT6 interrupt: Off
; 0000 014F // PCINT7 interrupt: Off
; 0000 0150 PCMSK0=0x00;
	STS  107,R30
; 0000 0151 PCICR=0x00;
	STS  104,R30
; 0000 0152 
; 0000 0153 // Timer/Counter 0 Interrupt(s) initialization
; 0000 0154 TIMSK0=0x00;
	STS  110,R30
; 0000 0155 // Timer/Counter 1 Interrupt(s) initialization
; 0000 0156 TIMSK1=0x00;
	STS  111,R30
; 0000 0157 // Timer/Counter 2 Interrupt(s) initialization
; 0000 0158 TIMSK2=0x00;
	STS  112,R30
; 0000 0159 // Timer/Counter 3 Interrupt(s) initialization
; 0000 015A TIMSK3=0x00;
	STS  113,R30
; 0000 015B 
; 0000 015C // USART1 initialization
; 0000 015D // Communication Parameters: 8 Data, 1 Stop, No Parity
; 0000 015E // USART1 Receiver: On
; 0000 015F // USART1 Transmitter: On
; 0000 0160 // USART1 Mode: Asynchronous
; 0000 0161 // USART1 Baud Rate: 9600
; 0000 0162 UCSR1A=0x00;
	STS  200,R30
; 0000 0163 UCSR1B=0x18;
	LDI  R30,LOW(24)
	STS  201,R30
; 0000 0164 UCSR1C=0x06;
	LDI  R30,LOW(6)
	STS  202,R30
; 0000 0165 UBRR1H=0x00;
	LDI  R30,LOW(0)
	STS  205,R30
; 0000 0166 UBRR1L=0x67;
	LDI  R30,LOW(103)
	STS  204,R30
; 0000 0167 
; 0000 0168 // Analog Comparator initialization
; 0000 0169 // Analog Comparator: Off
; 0000 016A // Analog Comparator Input Capture by Timer/Counter 1: Off
; 0000 016B ACSR=0x80;
	LDI  R30,LOW(128)
	OUT  0x30,R30
; 0000 016C ADCSRB=0x00;
	LDI  R30,LOW(0)
	STS  123,R30
; 0000 016D 
; 0000 016E // USB Controller initialization
; 0000 016F // USB Mode: Disabled
; 0000 0170 // UID Pin: Off
; 0000 0171 // UVCON Pin: Off
; 0000 0172 // USB Pad Regulator: Off
; 0000 0173 // OTG Pad: Off
; 0000 0174 // VBUS Transition interrupt: Off
; 0000 0175 // ID Transition interrupt: Off
; 0000 0176 UHWCON=0x00;
	STS  215,R30
; 0000 0177 USBCON=0x00;
	STS  216,R30
; 0000 0178 USBINT=0; // Clear the interrupt flags
	STS  218,R30
; 0000 0179 // SRP interrupt: Off
; 0000 017A // VBUS Error interrupt: Off
; 0000 017B // B-Connection Error interrupt: Off
; 0000 017C // Role Exchange interrupt: Off
; 0000 017D // HNP Error interrupt: Off
; 0000 017E // Suspend Time-out Error interrupt: Off
; 0000 017F OTGIEN=0x00;
	STS  222,R30
; 0000 0180 OTGINT=0; // Clear the interrupt flags
	STS  223,R30
; 0000 0181 // SRP Method: Data line pulsing
; 0000 0182 OTGCON=0x00;
	STS  221,R30
; 0000 0183 
; 0000 0184 for(i=0;i<20;i++)
	CLR  R3
	CLR  R4
_0x54:
	LDI  R30,LOW(20)
	LDI  R31,HIGH(20)
	CP   R3,R30
	CPC  R4,R31
	BRGE _0x55
; 0000 0185 {
; 0000 0186 delay_ms(500);
	LDI  R30,LOW(500)
	LDI  R31,HIGH(500)
	CALL SUBOPT_0x6
; 0000 0187 }
	CALL SUBOPT_0x7
	RJMP _0x54
_0x55:
; 0000 0188 
; 0000 0189 printf("Robot 1, ready..");
	__POINTW1FN _0x0,0
	CALL SUBOPT_0x8
; 0000 018A 
; 0000 018B while (1)
_0x56:
; 0000 018C       {
; 0000 018D          //k += PIND.0;
; 0000 018E          //l += PINE.5;
; 0000 018F          data = getchar();
	CALL SUBOPT_0x9
; 0000 0190          //printf("%x\n",UCSR1A);
; 0000 0191          //baca data encoder
; 0000 0192          //j = PIND.0;
; 0000 0193 
; 0000 0194          //if(PIND.0!=j)
; 0000 0195          //{
; 0000 0196 
; 0000 0197 
; 0000 0198              //printf("%d\n",i);
; 0000 0199          //}  //baca data encoder
; 0000 019A 
; 0000 019B 
; 0000 019C             if (data == '#')
	CPI  R26,LOW(0x23)
	BREQ PC+3
	JMP _0x59
; 0000 019D             {
; 0000 019E                 while (data == '#')
_0x5A:
	LDS  R26,_data
	CPI  R26,LOW(0x23)
	BREQ PC+3
	JMP _0x5C
; 0000 019F                 {
; 0000 01A0                     data = getchar();
	CALL SUBOPT_0x9
; 0000 01A1                     if (data == 'C')
	CPI  R26,LOW(0x43)
	BREQ PC+3
	JMP _0x5D
; 0000 01A2                     {
; 0000 01A3                         while (data == 'C')
_0x5E:
	LDS  R26,_data
	CPI  R26,LOW(0x43)
	BREQ PC+3
	JMP _0x60
; 0000 01A4                         {
; 0000 01A5                             data = getchar();
	CALL SUBOPT_0x9
; 0000 01A6 
; 0000 01A7                             if (data == 'C')
	CPI  R26,LOW(0x43)
	BRNE _0x61
; 0000 01A8                             {
; 0000 01A9                                 data = getchar();
	RCALL _getchar
	STS  _data,R30
; 0000 01AA                             }
; 0000 01AB                             else
	RJMP _0x62
_0x61:
; 0000 01AC                             {
; 0000 01AD                                 for(i=0;i<15;i++)
	CLR  R3
	CLR  R4
_0x64:
	LDI  R30,LOW(15)
	LDI  R31,HIGH(15)
	CP   R3,R30
	CPC  R4,R31
	BRGE _0x65
; 0000 01AE                                 {
; 0000 01AF                                     speed[i] = data;
	__GETW1R 3,4
	SUBI R30,LOW(-_speed)
	SBCI R31,HIGH(-_speed)
	LDS  R26,_data
	STD  Z+0,R26
; 0000 01B0                                     while (data==speed[i])//(UCSR1A == 64 )
_0x66:
	LDI  R26,LOW(_speed)
	LDI  R27,HIGH(_speed)
	ADD  R26,R3
	ADC  R27,R4
	LD   R30,X
	LDS  R26,_data
	CP   R30,R26
	BRNE _0x68
; 0000 01B1                                     {
; 0000 01B2                                         data = getchar();
	RCALL _getchar
	STS  _data,R30
; 0000 01B3                                     }
	RJMP _0x66
_0x68:
; 0000 01B4                                 }
	CALL SUBOPT_0x7
	RJMP _0x64
_0x65:
; 0000 01B5                                  rpwm=konversi(speed[2])*100+konversi(speed[4])*10+konversi(speed[6]);
	CALL SUBOPT_0xA
	PUSH R31
	PUSH R30
	CALL SUBOPT_0xB
	POP  R26
	POP  R27
	ADD  R30,R26
	ADC  R31,R27
	PUSH R31
	PUSH R30
	__GETB1MN _speed,6
	ST   -Y,R30
	RCALL _konversi
	POP  R26
	POP  R27
	CALL SUBOPT_0xC
; 0000 01B6                                  lpwm=konversi(speed[10])*100+konversi(speed[12])*10+konversi(speed[14]);
	PUSH R31
	PUSH R30
	CALL SUBOPT_0xD
	POP  R26
	POP  R27
	ADD  R30,R26
	ADC  R31,R27
	PUSH R31
	PUSH R30
	__GETB1MN _speed,14
	ST   -Y,R30
	RCALL _konversi
	POP  R26
	POP  R27
	ADD  R30,R26
	ADC  R31,R27
	__PUTW1R 11,12
; 0000 01B7                                printf("\nPWM kanan: ");
	__POINTW1FN _0x0,17
	CALL SUBOPT_0x8
; 0000 01B8                                  printf("%d\n",rpwm);
	__POINTW1FN _0x0,30
	ST   -Y,R31
	ST   -Y,R30
	__GETW1R 13,14
	CALL SUBOPT_0xE
; 0000 01B9                                  printf("PWM kiri: ");
	__POINTW1FN _0x0,34
	CALL SUBOPT_0x8
; 0000 01BA                                  printf("%d\n",lpwm);
	__POINTW1FN _0x0,30
	ST   -Y,R31
	ST   -Y,R30
	__GETW1R 11,12
	CALL SUBOPT_0xE
; 0000 01BB                                  gerak_robot(speed[0],speed[8],rpwm,lpwm);
	LDS  R30,_speed
	ST   -Y,R30
	__GETB1MN _speed,8
	ST   -Y,R30
	ST   -Y,R14
	ST   -Y,R13
	ST   -Y,R12
	ST   -Y,R11
	RCALL _gerak_robot
; 0000 01BC                             }
_0x62:
; 0000 01BD 
; 0000 01BE                         }
	RJMP _0x5E
_0x60:
; 0000 01BF                     }
; 0000 01C0                     else
	RJMP _0x69
_0x5D:
; 0000 01C1                     {
; 0000 01C2                         for(i=0;i<15;i++)
	CLR  R3
	CLR  R4
_0x6B:
	LDI  R30,LOW(15)
	LDI  R31,HIGH(15)
	CP   R3,R30
	CPC  R4,R31
	BRGE _0x6C
; 0000 01C3                         {
; 0000 01C4                             speed[i] = '0';
	LDI  R26,LOW(_speed)
	LDI  R27,HIGH(_speed)
	ADD  R26,R3
	ADC  R27,R4
	LDI  R30,LOW(48)
	ST   X,R30
; 0000 01C5                         }
	CALL SUBOPT_0x7
	RJMP _0x6B
_0x6C:
; 0000 01C6                     }
_0x69:
; 0000 01C7                 }
	RJMP _0x5A
_0x5C:
; 0000 01C8             }
; 0000 01C9             rpwm=konversi(speed[2])*100+konversi(speed[4])*10+konversi(speed[6]);
_0x59:
	CALL SUBOPT_0xA
	PUSH R31
	PUSH R30
	CALL SUBOPT_0xB
	POP  R26
	POP  R27
	ADD  R30,R26
	ADC  R31,R27
	PUSH R31
	PUSH R30
	__GETB1MN _speed,6
	ST   -Y,R30
	RCALL _konversi
	POP  R26
	POP  R27
	CALL SUBOPT_0xC
; 0000 01CA             lpwm=konversi(speed[10])*100+konversi(speed[12])*10+konversi(speed[14]);
	PUSH R31
	PUSH R30
	CALL SUBOPT_0xD
	POP  R26
	POP  R27
	ADD  R30,R26
	ADC  R31,R27
	PUSH R31
	PUSH R30
	__GETB1MN _speed,14
	ST   -Y,R30
	RCALL _konversi
	POP  R26
	POP  R27
	ADD  R30,R26
	ADC  R31,R27
	__PUTW1R 11,12
; 0000 01CB 
; 0000 01CC 
; 0000 01CD          if(data == '8')    //maju tekan w
	LDS  R26,_data
	CPI  R26,LOW(0x38)
	BRNE _0x6D
; 0000 01CE          {
; 0000 01CF             PORTB.4 = 1;
	CALL SUBOPT_0x0
; 0000 01D0             PORTB.5 = 0;
; 0000 01D1             PORTB.6 = 0;
; 0000 01D2             PORTB.7 = 1;
; 0000 01D3             OCR3AH=0x00;//data1;
; 0000 01D4             OCR3AL=70;//data1    motor kiri
	LDI  R30,LOW(70)
	CALL SUBOPT_0x5
; 0000 01D5             OCR3BH=0x00;//data1;
; 0000 01D6             OCR3BL=100;//data1;     motor kanan
	LDI  R30,LOW(100)
	CALL SUBOPT_0xF
; 0000 01D7             delay_ms(50);
; 0000 01D8 
; 0000 01D9              PORTB.4 = 0;
	CALL SUBOPT_0x4
; 0000 01DA             PORTB.5 = 1;
; 0000 01DB             PORTB.6 = 1;
; 0000 01DC             PORTB.7 = 0;
; 0000 01DD             OCR3AH=0x00;//data1;
; 0000 01DE             OCR3AL=100;//data1;
	CALL SUBOPT_0x10
; 0000 01DF             OCR3AH=0x00;//data1;
; 0000 01E0             OCR3AL=100;//data1;
; 0000 01E1             delay_ms(5);
; 0000 01E2 
; 0000 01E3             PORTB.4 = 1;
	CALL SUBOPT_0x11
; 0000 01E4             PORTB.5 = 1;
; 0000 01E5             PORTB.6 = 1;
; 0000 01E6             PORTB.7 = 1;
; 0000 01E7 
; 0000 01E8             data=']';
; 0000 01E9             k += PIND.0;
	LDI  R30,0
	SBIC 0x9,0
	LDI  R30,1
	LDI  R31,0
	__ADDWRR 5,6,30,31
; 0000 01EA             l += PINE.5;
	LDI  R30,0
	SBIC 0xC,5
	LDI  R30,1
	LDI  R31,0
	__ADDWRR 7,8,30,31
; 0000 01EB          }
; 0000 01EC 
; 0000 01ED          if(data == '2')    //mundur tekan s
_0x6D:
	LDS  R26,_data
	CPI  R26,LOW(0x32)
	BRNE _0x86
; 0000 01EE          {
; 0000 01EF             PORTB.4 = 0;
	CALL SUBOPT_0x4
; 0000 01F0             PORTB.5 = 1;
; 0000 01F1             PORTB.6 = 1;
; 0000 01F2             PORTB.7 = 0;
; 0000 01F3             OCR3AH=0x00;//data1;
; 0000 01F4             OCR3AL=70;//data1
	LDI  R30,LOW(70)
	CALL SUBOPT_0x5
; 0000 01F5             OCR3BH=0x00;//data1;
; 0000 01F6             OCR3BL=98;//data1;
	LDI  R30,LOW(98)
	CALL SUBOPT_0xF
; 0000 01F7             delay_ms(50);
; 0000 01F8 
; 0000 01F9 
; 0000 01FA              PORTB.4 = 1;
	CALL SUBOPT_0x0
; 0000 01FB             PORTB.5 = 0;
; 0000 01FC             PORTB.6 = 0;
; 0000 01FD             PORTB.7 = 1;
; 0000 01FE             OCR3AH=0x00;//data1;
; 0000 01FF             OCR3AL=100;//data1;
	CALL SUBOPT_0x10
; 0000 0200             OCR3AH=0x00;//data1;
; 0000 0201             OCR3AL=100;//data1;
; 0000 0202             delay_ms(5);
; 0000 0203 
; 0000 0204             PORTB.4 = 1;
	CALL SUBOPT_0x11
; 0000 0205             PORTB.5 = 1;
; 0000 0206             PORTB.6 = 1;
; 0000 0207             PORTB.7 = 1;
; 0000 0208 
; 0000 0209             data=']';
; 0000 020A          }
; 0000 020B 
; 0000 020C          if(data == 'p')
_0x86:
	LDS  R26,_data
	CPI  R26,LOW(0x70)
	BRNE _0x9F
; 0000 020D          {
; 0000 020E            printf("k = %d ",k);
	__POINTW1FN _0x0,45
	ST   -Y,R31
	ST   -Y,R30
	__GETW1R 5,6
	CALL SUBOPT_0xE
; 0000 020F             printf("l = %d ",l);
	__POINTW1FN _0x0,53
	ST   -Y,R31
	ST   -Y,R30
	__GETW1R 7,8
	CALL SUBOPT_0xE
; 0000 0210          }
; 0000 0211 
; 0000 0212          if(data == '6')    //kanan
_0x9F:
	LDS  R26,_data
	CPI  R26,LOW(0x36)
	BRNE _0xA0
; 0000 0213          {
; 0000 0214             PORTB.4 = 0;
	CALL SUBOPT_0x3
; 0000 0215             PORTB.5 = 1;
; 0000 0216             PORTB.6 = 0;
; 0000 0217             PORTB.7 = 1;
; 0000 0218             OCR3AH=0x00;//data1;
; 0000 0219             OCR3AL=100;//data1
	LDI  R30,LOW(100)
	CALL SUBOPT_0x5
; 0000 021A             OCR3BH=0x00;//data1;
; 0000 021B             OCR3BL=98;//data1;
	LDI  R30,LOW(98)
	CALL SUBOPT_0xF
; 0000 021C             delay_ms(50);
; 0000 021D 
; 0000 021E             PORTB.4 = 1;
	CALL SUBOPT_0x2
; 0000 021F             PORTB.5 = 0;
; 0000 0220             PORTB.6 = 1;
; 0000 0221             PORTB.7 = 0;
; 0000 0222             OCR3AH=0x00;//data1;
; 0000 0223             OCR3AL=100;//data1;
	CALL SUBOPT_0x10
; 0000 0224             OCR3AH=0x00;//data1;
; 0000 0225             OCR3AL=100;//data1;
; 0000 0226             delay_ms(5);
; 0000 0227 
; 0000 0228             PORTB.4 = 1;
	CALL SUBOPT_0x11
; 0000 0229             PORTB.5 = 1;
; 0000 022A             PORTB.6 = 1;
; 0000 022B             PORTB.7 = 1;
; 0000 022C 
; 0000 022D             data=']';
; 0000 022E          }
; 0000 022F 
; 0000 0230          if(data == '4')    //kiri
_0xA0:
	LDS  R26,_data
	CPI  R26,LOW(0x34)
	BRNE _0xB9
; 0000 0231          {
; 0000 0232             PORTB.4 = 1;
	CALL SUBOPT_0x2
; 0000 0233             PORTB.5 = 0;
; 0000 0234             PORTB.6 = 1;
; 0000 0235             PORTB.7 = 0;
; 0000 0236             OCR3AH=0x00;//data1;
; 0000 0237             OCR3AL=100;//data1
	LDI  R30,LOW(100)
	CALL SUBOPT_0x5
; 0000 0238             OCR3BH=0x00;//data1;
; 0000 0239             OCR3BL=96;//data1;
	LDI  R30,LOW(96)
	CALL SUBOPT_0xF
; 0000 023A             delay_ms(50);
; 0000 023B 
; 0000 023C             PORTB.4 = 0;
	CALL SUBOPT_0x3
; 0000 023D             PORTB.5 = 1;
; 0000 023E             PORTB.6 = 0;
; 0000 023F             PORTB.7 = 1;
; 0000 0240             OCR3AH=0x00;//data1;
; 0000 0241             OCR3AL=100;//data1;
	CALL SUBOPT_0x10
; 0000 0242             OCR3AH=0x00;//data1;
; 0000 0243             OCR3AL=100;//data1;
; 0000 0244             delay_ms(5);
; 0000 0245 
; 0000 0246             PORTB.4 = 1;
	CALL SUBOPT_0x11
; 0000 0247             PORTB.5 = 1;
; 0000 0248             PORTB.6 = 1;
; 0000 0249             PORTB.7 = 1;
; 0000 024A 
; 0000 024B 
; 0000 024C             data=']';
; 0000 024D          }
; 0000 024E       };
_0xB9:
	RJMP _0x56
; 0000 024F 
; 0000 0250 }
_0xD2:
	RJMP _0xD2
;
;
;
	#ifndef __SLEEP_DEFINED__
	#define __SLEEP_DEFINED__
	.EQU __se_bit=0x01
	.EQU __sm_mask=0x0E
	.EQU __sm_powerdown=0x04
	.EQU __sm_powersave=0x06
	.EQU __sm_standby=0x0C
	.EQU __sm_ext_standby=0x0E
	.EQU __sm_adc_noise_red=0x02
	.SET power_ctrl_reg=smcr
	#endif

	.CSEG
_getchar:
_0x2000003:
	LDS  R30,200
	ANDI R30,LOW(0x80)
	BREQ _0x2000003
	LDS  R30,206
	RET
_putchar:
_0x2000006:
	LDS  R30,200
	ANDI R30,LOW(0x20)
	BREQ _0x2000006
	LD   R30,Y
	STS  206,R30
	ADIW R28,1
	RET
_put_usart_G100:
	LDD  R30,Y+2
	ST   -Y,R30
	RCALL _putchar
	LD   R26,Y
	LDD  R27,Y+1
	LD   R30,X+
	LD   R31,X+
	ADIW R30,1
	ST   -X,R31
	ST   -X,R30
_0x20A0001:
	ADIW R28,3
	RET
__print_G100:
	SBIW R28,6
	CALL __SAVELOCR6
	LDI  R17,0
	LDD  R26,Y+12
	LDD  R27,Y+12+1
	LDI  R30,LOW(0)
	LDI  R31,HIGH(0)
	ST   X+,R30
	ST   X,R31
_0x200001C:
	LDD  R30,Y+18
	LDD  R31,Y+18+1
	ADIW R30,1
	STD  Y+18,R30
	STD  Y+18+1,R31
	SBIW R30,1
	LPM  R30,Z
	MOV  R18,R30
	CPI  R30,0
	BRNE PC+3
	JMP _0x200001E
	MOV  R30,R17
	CPI  R30,0
	BRNE _0x2000022
	CPI  R18,37
	BRNE _0x2000023
	LDI  R17,LOW(1)
	RJMP _0x2000024
_0x2000023:
	CALL SUBOPT_0x12
_0x2000024:
	RJMP _0x2000021
_0x2000022:
	CPI  R30,LOW(0x1)
	BRNE _0x2000025
	CPI  R18,37
	BRNE _0x2000026
	CALL SUBOPT_0x12
	RJMP _0x20000CF
_0x2000026:
	LDI  R17,LOW(2)
	LDI  R20,LOW(0)
	LDI  R16,LOW(0)
	CPI  R18,45
	BRNE _0x2000027
	LDI  R16,LOW(1)
	RJMP _0x2000021
_0x2000027:
	CPI  R18,43
	BRNE _0x2000028
	LDI  R20,LOW(43)
	RJMP _0x2000021
_0x2000028:
	CPI  R18,32
	BRNE _0x2000029
	LDI  R20,LOW(32)
	RJMP _0x2000021
_0x2000029:
	RJMP _0x200002A
_0x2000025:
	CPI  R30,LOW(0x2)
	BRNE _0x200002B
_0x200002A:
	LDI  R21,LOW(0)
	LDI  R17,LOW(3)
	CPI  R18,48
	BRNE _0x200002C
	ORI  R16,LOW(128)
	RJMP _0x2000021
_0x200002C:
	RJMP _0x200002D
_0x200002B:
	CPI  R30,LOW(0x3)
	BREQ PC+3
	JMP _0x2000021
_0x200002D:
	CPI  R18,48
	BRLO _0x2000030
	CPI  R18,58
	BRLO _0x2000031
_0x2000030:
	RJMP _0x200002F
_0x2000031:
	LDI  R26,LOW(10)
	MUL  R21,R26
	MOV  R21,R0
	MOV  R30,R18
	SUBI R30,LOW(48)
	ADD  R21,R30
	RJMP _0x2000021
_0x200002F:
	MOV  R30,R18
	CPI  R30,LOW(0x63)
	BRNE _0x2000035
	CALL SUBOPT_0x13
	LDD  R30,Y+16
	LDD  R31,Y+16+1
	LDD  R26,Z+4
	ST   -Y,R26
	CALL SUBOPT_0x14
	RJMP _0x2000036
_0x2000035:
	CPI  R30,LOW(0x73)
	BRNE _0x2000038
	CALL SUBOPT_0x13
	CALL SUBOPT_0x15
	CALL _strlen
	MOV  R17,R30
	RJMP _0x2000039
_0x2000038:
	CPI  R30,LOW(0x70)
	BRNE _0x200003B
	CALL SUBOPT_0x13
	CALL SUBOPT_0x15
	CALL _strlenf
	MOV  R17,R30
	ORI  R16,LOW(8)
_0x2000039:
	ORI  R16,LOW(2)
	ANDI R16,LOW(127)
	LDI  R19,LOW(0)
	RJMP _0x200003C
_0x200003B:
	CPI  R30,LOW(0x64)
	BREQ _0x200003F
	CPI  R30,LOW(0x69)
	BRNE _0x2000040
_0x200003F:
	ORI  R16,LOW(4)
	RJMP _0x2000041
_0x2000040:
	CPI  R30,LOW(0x75)
	BRNE _0x2000042
_0x2000041:
	LDI  R30,LOW(_tbl10_G100*2)
	LDI  R31,HIGH(_tbl10_G100*2)
	STD  Y+6,R30
	STD  Y+6+1,R31
	LDI  R17,LOW(5)
	RJMP _0x2000043
_0x2000042:
	CPI  R30,LOW(0x58)
	BRNE _0x2000045
	ORI  R16,LOW(8)
	RJMP _0x2000046
_0x2000045:
	CPI  R30,LOW(0x78)
	BREQ PC+3
	JMP _0x2000077
_0x2000046:
	LDI  R30,LOW(_tbl16_G100*2)
	LDI  R31,HIGH(_tbl16_G100*2)
	STD  Y+6,R30
	STD  Y+6+1,R31
	LDI  R17,LOW(4)
_0x2000043:
	SBRS R16,2
	RJMP _0x2000048
	CALL SUBOPT_0x13
	CALL SUBOPT_0x16
	LDD  R26,Y+11
	TST  R26
	BRPL _0x2000049
	LDD  R30,Y+10
	LDD  R31,Y+10+1
	CALL __ANEGW1
	STD  Y+10,R30
	STD  Y+10+1,R31
	LDI  R20,LOW(45)
_0x2000049:
	CPI  R20,0
	BREQ _0x200004A
	SUBI R17,-LOW(1)
	RJMP _0x200004B
_0x200004A:
	ANDI R16,LOW(251)
_0x200004B:
	RJMP _0x200004C
_0x2000048:
	CALL SUBOPT_0x13
	CALL SUBOPT_0x16
_0x200004C:
_0x200003C:
	SBRC R16,0
	RJMP _0x200004D
_0x200004E:
	CP   R17,R21
	BRSH _0x2000050
	SBRS R16,7
	RJMP _0x2000051
	SBRS R16,2
	RJMP _0x2000052
	ANDI R16,LOW(251)
	MOV  R18,R20
	SUBI R17,LOW(1)
	RJMP _0x2000053
_0x2000052:
	LDI  R18,LOW(48)
_0x2000053:
	RJMP _0x2000054
_0x2000051:
	LDI  R18,LOW(32)
_0x2000054:
	CALL SUBOPT_0x12
	SUBI R21,LOW(1)
	RJMP _0x200004E
_0x2000050:
_0x200004D:
	MOV  R19,R17
	SBRS R16,1
	RJMP _0x2000055
_0x2000056:
	CPI  R19,0
	BREQ _0x2000058
	SBRS R16,3
	RJMP _0x2000059
	LDD  R30,Y+6
	LDD  R31,Y+6+1
	LPM  R18,Z+
	STD  Y+6,R30
	STD  Y+6+1,R31
	RJMP _0x200005A
_0x2000059:
	LDD  R26,Y+6
	LDD  R27,Y+6+1
	LD   R18,X+
	STD  Y+6,R26
	STD  Y+6+1,R27
_0x200005A:
	CALL SUBOPT_0x12
	CPI  R21,0
	BREQ _0x200005B
	SUBI R21,LOW(1)
_0x200005B:
	SUBI R19,LOW(1)
	RJMP _0x2000056
_0x2000058:
	RJMP _0x200005C
_0x2000055:
_0x200005E:
	LDI  R18,LOW(48)
	LDD  R30,Y+6
	LDD  R31,Y+6+1
	CALL __GETW1PF
	STD  Y+8,R30
	STD  Y+8+1,R31
	LDD  R30,Y+6
	LDD  R31,Y+6+1
	ADIW R30,2
	STD  Y+6,R30
	STD  Y+6+1,R31
_0x2000060:
	LDD  R30,Y+8
	LDD  R31,Y+8+1
	LDD  R26,Y+10
	LDD  R27,Y+10+1
	CP   R26,R30
	CPC  R27,R31
	BRLO _0x2000062
	SUBI R18,-LOW(1)
	LDD  R26,Y+8
	LDD  R27,Y+8+1
	LDD  R30,Y+10
	LDD  R31,Y+10+1
	SUB  R30,R26
	SBC  R31,R27
	STD  Y+10,R30
	STD  Y+10+1,R31
	RJMP _0x2000060
_0x2000062:
	CPI  R18,58
	BRLO _0x2000063
	SBRS R16,3
	RJMP _0x2000064
	SUBI R18,-LOW(7)
	RJMP _0x2000065
_0x2000064:
	SUBI R18,-LOW(39)
_0x2000065:
_0x2000063:
	SBRC R16,4
	RJMP _0x2000067
	CPI  R18,49
	BRSH _0x2000069
	LDD  R26,Y+8
	LDD  R27,Y+8+1
	SBIW R26,1
	BRNE _0x2000068
_0x2000069:
	RJMP _0x20000D0
_0x2000068:
	CP   R21,R19
	BRLO _0x200006D
	SBRS R16,0
	RJMP _0x200006E
_0x200006D:
	RJMP _0x200006C
_0x200006E:
	LDI  R18,LOW(32)
	SBRS R16,7
	RJMP _0x200006F
	LDI  R18,LOW(48)
_0x20000D0:
	ORI  R16,LOW(16)
	SBRS R16,2
	RJMP _0x2000070
	ANDI R16,LOW(251)
	ST   -Y,R20
	CALL SUBOPT_0x14
	CPI  R21,0
	BREQ _0x2000071
	SUBI R21,LOW(1)
_0x2000071:
_0x2000070:
_0x200006F:
_0x2000067:
	CALL SUBOPT_0x12
	CPI  R21,0
	BREQ _0x2000072
	SUBI R21,LOW(1)
_0x2000072:
_0x200006C:
	SUBI R19,LOW(1)
	LDD  R26,Y+8
	LDD  R27,Y+8+1
	SBIW R26,2
	BRLO _0x200005F
	RJMP _0x200005E
_0x200005F:
_0x200005C:
	SBRS R16,0
	RJMP _0x2000073
_0x2000074:
	CPI  R21,0
	BREQ _0x2000076
	SUBI R21,LOW(1)
	LDI  R30,LOW(32)
	ST   -Y,R30
	CALL SUBOPT_0x14
	RJMP _0x2000074
_0x2000076:
_0x2000073:
_0x2000077:
_0x2000036:
_0x20000CF:
	LDI  R17,LOW(0)
_0x2000021:
	RJMP _0x200001C
_0x200001E:
	LDD  R26,Y+12
	LDD  R27,Y+12+1
	CALL __GETW1P
	CALL __LOADLOCR6
	ADIW R28,20
	RET
_printf:
	PUSH R15
	MOV  R15,R24
	SBIW R28,6
	ST   -Y,R17
	ST   -Y,R16
	MOVW R26,R28
	ADIW R26,4
	CALL __ADDW2R15
	MOVW R16,R26
	LDI  R30,LOW(0)
	STD  Y+4,R30
	STD  Y+4+1,R30
	STD  Y+6,R30
	STD  Y+6+1,R30
	MOVW R26,R28
	ADIW R26,8
	CALL __ADDW2R15
	CALL __GETW1P
	ST   -Y,R31
	ST   -Y,R30
	ST   -Y,R17
	ST   -Y,R16
	LDI  R30,LOW(_put_usart_G100)
	LDI  R31,HIGH(_put_usart_G100)
	ST   -Y,R31
	ST   -Y,R30
	MOVW R30,R28
	ADIW R30,8
	ST   -Y,R31
	ST   -Y,R30
	RCALL __print_G100
	LDD  R17,Y+1
	LDD  R16,Y+0
	ADIW R28,8
	POP  R15
	RET

	.CSEG
_strlen:
    ld   r26,y+
    ld   r27,y+
    clr  r30
    clr  r31
strlen0:
    ld   r22,x+
    tst  r22
    breq strlen1
    adiw r30,1
    rjmp strlen0
strlen1:
    ret
_strlenf:
    clr  r26
    clr  r27
    ld   r30,y+
    ld   r31,y+
strlenf0:
	lpm  r0,z+
    tst  r0
    breq strlenf1
    adiw r26,1
    rjmp strlenf0
strlenf1:
    movw r30,r26
    ret

	.CSEG

	.DSEG

	.CSEG

	.CSEG

	.CSEG

	.DSEG
_data:
	.BYTE 0x1
_speed:
	.BYTE 0xF
__seed_G102:
	.BYTE 0x4

	.CSEG
;OPTIMIZER ADDED SUBROUTINE, CALLED 3 TIMES, CODE SIZE REDUCTION:7 WORDS
SUBOPT_0x0:
	SBI  0x5,4
	CBI  0x5,5
	CBI  0x5,6
	SBI  0x5,7
	LDI  R30,LOW(0)
	STS  153,R30
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 4 TIMES, CODE SIZE REDUCTION:48 WORDS
SUBOPT_0x1:
	LD   R30,Y
	STS  152,R30
	LDI  R30,LOW(0)
	STS  155,R30
	LDD  R30,Y+2
	STS  154,R30
	LDI  R30,LOW(30)
	LDI  R31,HIGH(30)
	ST   -Y,R31
	ST   -Y,R30
	CALL _delay_ms
	SBI  0x5,4
	SBI  0x5,5
	SBI  0x5,6
	SBI  0x5,7
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 3 TIMES, CODE SIZE REDUCTION:7 WORDS
SUBOPT_0x2:
	SBI  0x5,4
	CBI  0x5,5
	SBI  0x5,6
	CBI  0x5,7
	LDI  R30,LOW(0)
	STS  153,R30
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 3 TIMES, CODE SIZE REDUCTION:7 WORDS
SUBOPT_0x3:
	CBI  0x5,4
	SBI  0x5,5
	CBI  0x5,6
	SBI  0x5,7
	LDI  R30,LOW(0)
	STS  153,R30
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 3 TIMES, CODE SIZE REDUCTION:7 WORDS
SUBOPT_0x4:
	CBI  0x5,4
	SBI  0x5,5
	SBI  0x5,6
	CBI  0x5,7
	LDI  R30,LOW(0)
	STS  153,R30
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 5 TIMES, CODE SIZE REDUCTION:9 WORDS
SUBOPT_0x5:
	STS  152,R30
	LDI  R30,LOW(0)
	STS  155,R30
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 9 TIMES, CODE SIZE REDUCTION:13 WORDS
SUBOPT_0x6:
	ST   -Y,R31
	ST   -Y,R30
	JMP  _delay_ms

;OPTIMIZER ADDED SUBROUTINE, CALLED 3 TIMES, CODE SIZE REDUCTION:1 WORDS
SUBOPT_0x7:
	LDI  R30,LOW(1)
	LDI  R31,HIGH(1)
	__ADDWRR 3,4,30,31
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 3 TIMES, CODE SIZE REDUCTION:5 WORDS
SUBOPT_0x8:
	ST   -Y,R31
	ST   -Y,R30
	LDI  R24,0
	CALL _printf
	ADIW R28,2
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 3 TIMES, CODE SIZE REDUCTION:5 WORDS
SUBOPT_0x9:
	CALL _getchar
	STS  _data,R30
	LDS  R26,_data
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 2 TIMES, CODE SIZE REDUCTION:4 WORDS
SUBOPT_0xA:
	__GETB1MN _speed,2
	ST   -Y,R30
	CALL _konversi
	LDI  R26,LOW(100)
	LDI  R27,HIGH(100)
	CALL __MULW12
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 2 TIMES, CODE SIZE REDUCTION:4 WORDS
SUBOPT_0xB:
	__GETB1MN _speed,4
	ST   -Y,R30
	CALL _konversi
	LDI  R26,LOW(10)
	LDI  R27,HIGH(10)
	CALL __MULW12
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 2 TIMES, CODE SIZE REDUCTION:8 WORDS
SUBOPT_0xC:
	ADD  R30,R26
	ADC  R31,R27
	__PUTW1R 13,14
	__GETB1MN _speed,10
	ST   -Y,R30
	CALL _konversi
	LDI  R26,LOW(100)
	LDI  R27,HIGH(100)
	CALL __MULW12
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 2 TIMES, CODE SIZE REDUCTION:4 WORDS
SUBOPT_0xD:
	__GETB1MN _speed,12
	ST   -Y,R30
	CALL _konversi
	LDI  R26,LOW(10)
	LDI  R27,HIGH(10)
	CALL __MULW12
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 4 TIMES, CODE SIZE REDUCTION:15 WORDS
SUBOPT_0xE:
	CALL __CWD1
	CALL __PUTPARD1
	LDI  R24,4
	CALL _printf
	ADIW R28,6
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 4 TIMES, CODE SIZE REDUCTION:9 WORDS
SUBOPT_0xF:
	STS  154,R30
	LDI  R30,LOW(50)
	LDI  R31,HIGH(50)
	RJMP SUBOPT_0x6

;OPTIMIZER ADDED SUBROUTINE, CALLED 4 TIMES, CODE SIZE REDUCTION:30 WORDS
SUBOPT_0x10:
	LDI  R30,LOW(100)
	STS  152,R30
	LDI  R30,LOW(0)
	STS  153,R30
	LDI  R30,LOW(100)
	STS  152,R30
	LDI  R30,LOW(5)
	LDI  R31,HIGH(5)
	RJMP SUBOPT_0x6

;OPTIMIZER ADDED SUBROUTINE, CALLED 4 TIMES, CODE SIZE REDUCTION:12 WORDS
SUBOPT_0x11:
	SBI  0x5,4
	SBI  0x5,5
	SBI  0x5,6
	SBI  0x5,7
	LDI  R30,LOW(93)
	STS  _data,R30
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 5 TIMES, CODE SIZE REDUCTION:21 WORDS
SUBOPT_0x12:
	ST   -Y,R18
	LDD  R30,Y+13
	LDD  R31,Y+13+1
	ST   -Y,R31
	ST   -Y,R30
	LDD  R30,Y+17
	LDD  R31,Y+17+1
	ICALL
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 5 TIMES, CODE SIZE REDUCTION:9 WORDS
SUBOPT_0x13:
	LDD  R30,Y+16
	LDD  R31,Y+16+1
	SBIW R30,4
	STD  Y+16,R30
	STD  Y+16+1,R31
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 3 TIMES, CODE SIZE REDUCTION:7 WORDS
SUBOPT_0x14:
	LDD  R30,Y+13
	LDD  R31,Y+13+1
	ST   -Y,R31
	ST   -Y,R30
	LDD  R30,Y+17
	LDD  R31,Y+17+1
	ICALL
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 2 TIMES, CODE SIZE REDUCTION:6 WORDS
SUBOPT_0x15:
	LDD  R26,Y+16
	LDD  R27,Y+16+1
	ADIW R26,4
	CALL __GETW1P
	STD  Y+6,R30
	STD  Y+6+1,R31
	ST   -Y,R31
	ST   -Y,R30
	RET

;OPTIMIZER ADDED SUBROUTINE, CALLED 2 TIMES, CODE SIZE REDUCTION:2 WORDS
SUBOPT_0x16:
	LDD  R26,Y+16
	LDD  R27,Y+16+1
	ADIW R26,4
	CALL __GETW1P
	STD  Y+10,R30
	STD  Y+10+1,R31
	RET


	.CSEG
_delay_ms:
	ld   r30,y+
	ld   r31,y+
	adiw r30,0
	breq __delay_ms1
__delay_ms0:
	__DELAY_USW 0xFA0
	wdr
	sbiw r30,1
	brne __delay_ms0
__delay_ms1:
	ret

__ADDW2R15:
	CLR  R0
	ADD  R26,R15
	ADC  R27,R0
	RET

__ANEGW1:
	NEG  R31
	NEG  R30
	SBCI R31,0
	RET

__CWD1:
	MOV  R22,R31
	ADD  R22,R22
	SBC  R22,R22
	MOV  R23,R22
	RET

__MULW12U:
	MUL  R31,R26
	MOV  R31,R0
	MUL  R30,R27
	ADD  R31,R0
	MUL  R30,R26
	MOV  R30,R0
	ADD  R31,R1
	RET

__MULW12:
	RCALL __CHKSIGNW
	RCALL __MULW12U
	BRTC __MULW121
	RCALL __ANEGW1
__MULW121:
	RET

__CHKSIGNW:
	CLT
	SBRS R31,7
	RJMP __CHKSW1
	RCALL __ANEGW1
	SET
__CHKSW1:
	SBRS R27,7
	RJMP __CHKSW2
	COM  R26
	COM  R27
	ADIW R26,1
	BLD  R0,0
	INC  R0
	BST  R0,0
__CHKSW2:
	RET

__GETW1P:
	LD   R30,X+
	LD   R31,X
	SBIW R26,1
	RET

__GETW1PF:
	LPM  R0,Z+
	LPM  R31,Z
	MOV  R30,R0
	RET

__PUTPARD1:
	ST   -Y,R23
	ST   -Y,R22
	ST   -Y,R31
	ST   -Y,R30
	RET

__SAVELOCR6:
	ST   -Y,R21
__SAVELOCR5:
	ST   -Y,R20
__SAVELOCR4:
	ST   -Y,R19
__SAVELOCR3:
	ST   -Y,R18
__SAVELOCR2:
	ST   -Y,R17
	ST   -Y,R16
	RET

__LOADLOCR6:
	LDD  R21,Y+5
__LOADLOCR5:
	LDD  R20,Y+4
__LOADLOCR4:
	LDD  R19,Y+3
__LOADLOCR3:
	LDD  R18,Y+2
__LOADLOCR2:
	LDD  R17,Y+1
	LD   R16,Y
	RET

;END OF CODE MARKER
__END_OF_CODE:
