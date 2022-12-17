#ifndef liquidCrystal_h
#define liquidCrystal_h

/***************************/
//
//			Commands
//
/****************************/
#define CLEAR_DISPALY       0x01 //			Clear Display
#define RETURN_HOME         0x02 //			RETURN HOME
#define ENTRYMODESET        0x04 //			ENTRY MODE SET
#define CURSOR_SHIFT        0x10 //			CURSOR || DISPLAY SHIFT
#define FUNCTION_SET        0x20 //			FUNCTION SET
#define SET_CGRAM_ADDRESS   0x40 //			SET CGRAM ADDRESS
#define SET_DDRAM_ADDRESS   0x80 //			SET DDRAM ADDRESS


/***************************/
//
//			FLAGS FOR Display ON/OFF
//
/****************************/
#define DISPLAY_ON          0x04
#define DISPLAY_OFF         0x00
#define CURSOR_ON           0x02
#define CURSOR_OFF          0x00
#define CURSOR_POS_ON       0x01
#define CURSOR_POS_OFF      0x00
#define DISPLAY_BLINKON     0x01
#define DISPLAY_BLINKOFF    0x00


/***************************/
//
//			FLAGS FOR DISPLAY ENTRY MODE
//
/****************************/
#define LCD_ENTRYRIGHT      0x00 
#define LCD_ENTRYLEFT       0x02
#define LCD_SHIFTINCREMENT  0x01
#define LCD_SHIFTDECREMENT  0x00

/***************************/
//
//			FLAGS FOR DISPLAY/CURSOR SHIFT
//
/****************************/
#define CURSOR_lEFT         0x00 //			SHIFT CURSOR TO THE LEFT | AC = AC - 1
#define CURSOR_RIGHT        0x04 //			SHIFT CURSOR TO THE RIGHT | AC = AC + 1
#define DISPLAY_LEFT        0x08 //			SHIFT DISPLAY TO THE LEFT, CURSOR FOLLOWS THE DISPLAY SHIFT | AC = AC
#define DISPLAY_RIGHT       0x0C //			SHIFT DISPLAY TO THE RIGHT, CURSOR FOLLOWS THE DISPLAY SHIFT | AC = AC

/***************************/
//
//			FLAGS FOR FUNCTION SET
//
/****************************/
#define LCD_8BITMODE        0x10 //			8 bit bus mode with MPU
#define LCD_4BITMODE        0x00 //			4 bit bus mode with MPU
#define LCD_1LINEMODE       0x00 //			1-line display mode
#define LCD_2LINEMODE       0x08 //			2-line display mode
#define LCD_5x8DOTMODE      0x00 //			5x8 dots format display mode
#define LCD_5x11DOTMODE     0x04 //			5x11dots format display mode


#endif
