#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP16
#define SERIAL_USART_RX_PIN GP17
#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
#define MASTER_LEFT
#define MATRIX_ROW_PINS_LEFT  { GP7, GP8, GP9, GP10 }
#define MATRIX_ROW_PINS_RIGHT { GP19, GP18, GP15, GP13 } 
#define MATRIX_COL_PINS_LEFT { GP0, GP1, GP2, GP3, GP4, GP15 }
#define MATRIX_COL_PINS_RIGHT { GP20, GP21, GP22, GP26, GP27, GP28 }