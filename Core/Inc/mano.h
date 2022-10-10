extern int counter;

#define PERIOD 100
#define SEQUENCE_LEN	5
#define LED1On() HAL_GPIO_WritePin(RGB_LD1_GPIO_Port,RGB_LD1_Pin,GPIO_PIN_SET) 
#define LED1Off() HAL_GPIO_WritePin(RGB_LD1_GPIO_Port,RGB_LD1_Pin,GPIO_PIN_RESET)

#define GPIOOn() HAL_GPIO_WritePin(GPIO_OutPB15_GPIO_Port,GPIO_OutPB15_Pin,GPIO_PIN_SET) 
#define GPIOOff() HAL_GPIO_WritePin(GPIO_OutPB15_GPIO_Port,GPIO_OutPB15_Pin,GPIO_PIN_RESET)

extern int DutyCycle[SEQUENCE_LEN];
extern int tick;

void DiscreteSequence(void);

// sablonai priklauso nuo principines schemos pajungimo
#define Aseg 0x40   // PC6
#define Bseg 0x10   // PC4
#define Cseg 0x08   // PC3
#define Dseg 0x02   // PC1
#define Eseg 0x04   // PC2
#define Fseg 0x20   // PC5
#define Gseg 0x01   // PC0
#define DPseg 0x80   // PC7

#define COM1 ~0x08
#define COM2 ~0x04
#define COM3 ~0x02
#define COM4 ~0x01

void DisplayDigit(void);
void DisplayDigit2(void);

