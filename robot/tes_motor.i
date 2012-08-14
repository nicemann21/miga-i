
#pragma used+
sfrb PINA=0;
sfrb DDRA=1;
sfrb PORTA=2;
sfrb PINB=3;
sfrb DDRB=4;
sfrb PORTB=5;
sfrb PINC=6;
sfrb DDRC=7;
sfrb PORTC=8;
sfrb PIND=9;
sfrb DDRD=0xa;
sfrb PORTD=0xb;
sfrb PINE=0xc;
sfrb DDRE=0xd;
sfrb PORTE=0xe;
sfrb PINF=0xf;
sfrb DDRF=0x10;
sfrb PORTF=0x11;
sfrb TIFR0=0x15;
sfrb TIFR1=0x16;
sfrb TIFR2=0x17;
sfrb TIFR3=0x18;
sfrb TIFR4=0x19;
sfrb TIFR5=0x1a;
sfrb PCIFR=0x1b;
sfrb EIFR=0x1c;
sfrb EIMSK=0x1d;
sfrb GPIOR0=0x1e;
sfrb EECR=0x1f;
sfrb EEDR=0x20;
sfrb EEARL=0x21;
sfrb EEARH=0x22;
sfrw EEAR=0x21;   
sfrb GTCCR=0x23;
sfrb TCCR0A=0x24;
sfrb TCCR0B=0x25;
sfrb TCNT0=0x26;
sfrb OCR0A=0x27;
sfrb OCR0B=0x28;
sfrb PLLCSR=0x29;
sfrb GPIOR1=0x2a;
sfrb GPIOR2=0x2b;
sfrb SPCR=0x2c;
sfrb SPSR=0x2d;
sfrb SPDR=0x2e;
sfrb ACSR=0x30;
sfrb OCDR=0x31;
sfrb SMCR=0x33;
sfrb MCUSR=0x34;
sfrb MCUCR=0x35;
sfrb SPMCSR=0x37;
sfrb RAMPZ=0x3b;
sfrb SPL=0x3d;
sfrb SPH=0x3e;
sfrb SREG=0x3f;
#pragma used-

#asm
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
#endasm

typedef char *va_list;

#pragma used+

char getchar(void);
void putchar(char c);
void puts(char *str);
void putsf(char flash *str);
int printf(char flash *fmtstr,...);
int sprintf(char *str, char flash *fmtstr,...);
int vprintf(char flash * fmtstr, va_list argptr);
int vsprintf(char *str, char flash * fmtstr, va_list argptr);

char *gets(char *str,unsigned int len);
int snprintf(char *str, unsigned int size, char flash *fmtstr,...);
int vsnprintf(char *str, unsigned int size, char flash * fmtstr, va_list argptr);

int scanf(char flash *fmtstr,...);
int sscanf(char *str, char flash *fmtstr,...);

#pragma used-

#pragma library stdio.lib

#pragma used+

void delay_us(unsigned int n);
void delay_ms(unsigned int n);

#pragma used-

#pragma used+

char *strcat(char *str1,char *str2);
char *strcatf(char *str1,char flash *str2);
char *strchr(char *str,char c);
signed char strcmp(char *str1,char *str2);
signed char strcmpf(char *str1,char flash *str2);
char *strcpy(char *dest,char *src);
char *strcpyf(char *dest,char flash *src);
unsigned char strlcpy(char *dest,char *src,unsigned char n);	
unsigned char strlcpyf(char *dest,char flash *src,unsigned char n); 
unsigned int strlenf(char flash *str);
char *strncat(char *str1,char *str2,unsigned char n);
char *strncatf(char *str1,char flash *str2,unsigned char n);
signed char strncmp(char *str1,char *str2,unsigned char n);
signed char strncmpf(char *str1,char flash *str2,unsigned char n);
char *strncpy(char *dest,char *src,unsigned char n);
char *strncpyf(char *dest,char flash *src,unsigned char n);
char *strpbrk(char *str,char *set);
char *strpbrkf(char *str,char flash *set);
char *strrchr(char *str,char c);
char *strrpbrk(char *str,char *set);
char *strrpbrkf(char *str,char flash *set);
char *strstr(char *str1,char *str2);
char *strstrf(char *str1,char flash *str2);
char *strtok(char *str1,char flash *str2);

unsigned int strlen(char *str);
void *memccpy(void *dest,void *src,char c,unsigned n);
void *memchr(void *buf,unsigned char c,unsigned n);
signed char memcmp(void *buf1,void *buf2,unsigned n);
signed char memcmpf(void *buf1,void flash *buf2,unsigned n);
void *memcpy(void *dest,void *src,unsigned n);
void *memcpyf(void *dest,void flash *src,unsigned n);
void *memmove(void *dest,void *src,unsigned n);
void *memset(void *buf,unsigned char c,unsigned n);
unsigned int strcspn(char *str,char *set);
unsigned int strcspnf(char *str,char flash *set);
int strpos(char *str,char c);
int strrpos(char *str,char c);
unsigned int strspn(char *str,char *set);
unsigned int strspnf(char *str,char flash *set);

#pragma used-
#pragma library string.lib

#pragma used+

unsigned char cabs(signed char x);
unsigned int abs(int x);
unsigned long labs(long x);
float fabs(float x);
int atoi(char *str);
long int atol(char *str);
float atof(char *str);
void itoa(int n,char *str);
void ltoa(long int n,char *str);
void ftoa(float n,unsigned char decimals,char *str);
void ftoe(float n,unsigned char decimals,char *str);
void srand(int seed);
int rand(void);
void *malloc(unsigned int size);
void *calloc(unsigned int num, unsigned int size);
void *realloc(void *ptr, unsigned int size); 
void free(void *ptr);

#pragma used-
#pragma library stdlib.lib

int i = 0, k=0,l=0;
int j = 0;
int lpwm, rpwm;
char data, speed[15];

int konversi (char p)
{
int k=0;
if(p=='0')
k=0;
if(p=='1')
k=1;
if(p=='2')
k=2;                    
if(p=='3')
k=3;
if(p=='4')
k=4;
if(p=='5')
k=5;
if(p=='6')
k=6;
if(p=='7')
k=7;
if(p=='8')
k=8;
if(p=='9')
k=9;

return k;    
}

void gerak_robot(char kanan, char kiri, int RPWM, int LPWM)
{
if (kanan == '+')
{
if (kiri == '+')  
{
PORTB.4 = 1;
PORTB.5 = 0;
PORTB.6 = 0;
PORTB.7 = 1; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=LPWM;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=RPWM;
delay_ms(30); 

PORTB.4 = 1;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 1;
}

if (kiri == '-')  
{
PORTB.4 = 1;
PORTB.5 = 0;
PORTB.6 = 1;
PORTB.7 = 0; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=LPWM;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=RPWM;
delay_ms(30); 

PORTB.4 = 1;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 1;
}
}
else
{
if (kiri == '+')  
{
PORTB.4 = 0;
PORTB.5 = 1;
PORTB.6 = 0;
PORTB.7 = 1; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=LPWM;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=RPWM;
delay_ms(30); 

PORTB.4 = 1;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 1;
}

if (kiri == '-')  
{
PORTB.4 = 0;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 0; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=LPWM;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=RPWM;
delay_ms(30); 

PORTB.4 = 1;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 1;    
}
}
}  

void main(void)
{

#pragma optsize-
(*(unsigned char *) 0x61)=0x80;
(*(unsigned char *) 0x61)=0x00;
#pragma optsize+

PORTA=0x00;
DDRA=0x00;

PORTB=0x00;
DDRB=0xF0;

PORTC=0x00;
DDRC=0xF0;

PORTD=0x00;
DDRD=0x00;

PORTE=0x00;
DDRE=0x00;

PORTF=0x00;
DDRF=0x00;

TCCR0A=0x00;
TCCR0B=0x00;
TCNT0=0x00;
OCR0A=0x00;
OCR0B=0x00;

(*(unsigned char *) 0x80)=0x00;
(*(unsigned char *) 0x81)=0x00;
(*(unsigned char *) 0x85)=0x00;
(*(unsigned char *) 0x84)=0x00;
(*(unsigned char *) 0x87)=0x00;
(*(unsigned char *) 0x86)=0x00;
(*(unsigned char *) 0x89)=0x00;
(*(unsigned char *) 0x88)=0x00;
(*(unsigned char *) 0x8b)=0x00;
(*(unsigned char *) 0x8a)=0x00;
(*(unsigned char *) 0x8d)=0x00;
(*(unsigned char *) 0x8c)=0x00;

(*(unsigned char *) 0xb6)=0x00;
(*(unsigned char *) 0xb0)=0x00;
(*(unsigned char *) 0xb1)=0x00;
(*(unsigned char *) 0xb2)=0x00;
(*(unsigned char *) 0xb3)=0x00;
(*(unsigned char *) 0xb4)=0x00;

(*(unsigned char *) 0x90)=0xA3;
(*(unsigned char *) 0x91)=0x0C;
(*(unsigned char *) 0x95)=0x00;
(*(unsigned char *) 0x94)=0x00;
(*(unsigned char *) 0x97)=0x00;
(*(unsigned char *) 0x96)=0x00;
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=0x00;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=0x00;
(*(unsigned char *) 0x9d)=0x00;
(*(unsigned char *) 0x9c)=0x00;

(*(unsigned char *) 0x69)=0x00;
(*(unsigned char *) 0x6a)=0x00;
EIMSK=0x00;

(*(unsigned char *) 0x6b)=0x00;
(*(unsigned char *) 0x68)=0x00;

(*(unsigned char *) 0x6e)=0x00;

(*(unsigned char *) 0x6f)=0x00;

(*(unsigned char *) 0x70)=0x00;

(*(unsigned char *) 0x71)=0x00;

(*(unsigned char *) 0xc8)=0x00;
(*(unsigned char *) 0xc9)=0x18;
(*(unsigned char *) 0xca)=0x06;
(*(unsigned char *) 0xcd)=0x00;
(*(unsigned char *) 0xcc)=0x67;

ACSR=0x80;
(*(unsigned char *) 0x7b)=0x00;

(*(unsigned char *) 0xd7)=0x00;
(*(unsigned char *) 0xd8)=0x00;
(*(unsigned char *) 0xda)=0; 

(*(unsigned char *) 0xde)=0x00;
(*(unsigned char *) 0xdf)=0; 

(*(unsigned char *) 0xdd)=0x00;

for(i=0;i<20;i++)
{
delay_ms(500);
}

printf("Robot 1, ready..");

while (1)
{                        

data = getchar();

if (data == '#')
{
while (data == '#')
{
data = getchar();
if (data == 'C')
{
while (data == 'C')  
{   
data = getchar();

if (data == 'C')
{
data = getchar();
}
else
{
for(i=0;i<15;i++)
{
speed[i] = data;                                      
while (data==speed[i])
{
data = getchar();
} 
}     
rpwm=konversi(speed[2])*100+konversi(speed[4])*10+konversi(speed[6]);
lpwm=konversi(speed[10])*100+konversi(speed[12])*10+konversi(speed[14]);
printf("\nPWM kanan: ");
printf("%d\n",rpwm);
printf("PWM kiri: ");
printf("%d\n",lpwm);
gerak_robot(speed[0],speed[8],rpwm,lpwm);
}

}   
}
else
{
for(i=0;i<15;i++)
{
speed[i] = '0';
}   
}
}
}    
rpwm=konversi(speed[2])*100+konversi(speed[4])*10+konversi(speed[6]);
lpwm=konversi(speed[10])*100+konversi(speed[12])*10+konversi(speed[14]);

if(data == '8')    
{              
PORTB.4 = 1;
PORTB.5 = 0;
PORTB.6 = 0;
PORTB.7 = 1; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=70;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=100;
delay_ms(50); 

PORTB.4 = 0;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 0; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
delay_ms(5); 

PORTB.4 = 1;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 1;

data=']'; 
k += PIND.0; 
l += PINE.5;
}   

if(data == '2')    
{
PORTB.4 = 0;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 0; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=70;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=98;
delay_ms(50); 

PORTB.4 = 1;
PORTB.5 = 0;
PORTB.6 = 0;
PORTB.7 = 1; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
delay_ms(5); 

PORTB.4 = 1;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 1;

data=']';
}

if(data == 'p')
{
printf("k = %d ",k);
printf("l = %d ",l);
}

if(data == '6')    
{
PORTB.4 = 0;
PORTB.5 = 1;
PORTB.6 = 0;
PORTB.7 = 1; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=98;
delay_ms(50); 

PORTB.4 = 1;
PORTB.5 = 0;
PORTB.6 = 1;
PORTB.7 = 0; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
delay_ms(5); 

PORTB.4 = 1;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 1;

data=']';
} 

if(data == '4')    
{
PORTB.4 = 1;
PORTB.5 = 0;
PORTB.6 = 1;
PORTB.7 = 0; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
(*(unsigned char *) 0x9b)=0x00;
(*(unsigned char *) 0x9a)=96;
delay_ms(50); 

PORTB.4 = 0;
PORTB.5 = 1;
PORTB.6 = 0;
PORTB.7 = 1; 
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
(*(unsigned char *) 0x99)=0x00;
(*(unsigned char *) 0x98)=100;
delay_ms(5); 

PORTB.4 = 1;
PORTB.5 = 1;
PORTB.6 = 1;
PORTB.7 = 1;

data=']';
}  
};

}

