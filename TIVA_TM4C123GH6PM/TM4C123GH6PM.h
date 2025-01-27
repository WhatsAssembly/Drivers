#ifndef tm4c123gh6pm_h
#define tm4c123gh6pm_h


/******************************************************/
//
//                      SYSCTL
//
/*******************************************************/

#define SYSCTL_RCGC2_R (*((volatile unsigned long *) 0x400FE108))



/******************************************************/
//
//                GPIO REGISTERS PORT F
//
/*******************************************************/

#define GPIO_PORTF_DATA_BITS_R  ((volatile unsigned long *)0x40025000)
#define GPIO_PORTF_DATA_R (*((volatile unsigned long *) 0x400253FC))
#define GPIO_PORTF_LOCK_R (*((volatile unsigned long *) 0x40025520))
#define GPIO_PORTF_CR_R (*((volatile unsigned long *) 0x40025524))
#define GPIO_PORTF_AMSEL_R (*((volatile unsigned long *) 0x40025528))
#define GPIO_PORTF_PCTL_R (*((volatile unsigned long *) 0x4002552C))
#define GPIO_PORTF_DIR_R (*((volatile unsigned long *) 0x40025400))
#define GPIO_PORTF_AFSEL_R (*((volatile unsigned long *) 0x40025420))
#define GPIO_PORTF_PUR_R (*((volatile unsigned long *) 0x40025510))
#define GPIO_PORTF_DEN_R (*((volatile unsigned long *) 0x4002551C))		




#endif // __tm4c123gh6pm_h___
