#pragma once

#define TARGET_BOARD_IDENTIFIER "ST41"

#define USBD_PRODUCT_STRING  "STM32F411CE"

#define LED0                    PC13
//#define LED1                    PC14

//#define BEEPER                  PB2
//#define BEEPER_INVERTED

// *************** SPI1 Gyro & ACC **********************

// #define USE_SPI
// #define USE_SPI_DEVICE_1

// #define SPI1_SCK_PIN            PA5
// #define SPI1_MISO_PIN           PA6
// #define SPI1_MOSI_PIN           PA7


#define USE_SPI
#define USE_SPI_DEVICE_2

#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_IMU_MPU9250
#define IMU_MPU9250_ALIGN       CW0_DEG
#define MPU9250_CS_PIN          PB12
#define MPU9250_SPI_BUS         BUS_SPI2


// *************** SPI2 OSD *****************************

#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PC14

// *************** SPI FLASH **************************

#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN           PA4
#define M25P16_SPI_BUS          BUS_SPI2
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART *****************************

#define USE_VCP
//#define VBUS_SENSING_PIN        PC15
//#define VBUS_SENSING_ENABLED

#define USE_UART1
#define UART1_TX_PIN            PB6
#define UART1_RX_PIN            PB7

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN     PA0 // pin Are 3.3v only
#define SOFTSERIAL_1_RX_PIN     PA0 // pin Are 3.3v only

#define SERIAL_PORT_COUNT       4

#define USE_RX_PPM
#define DEFAULT_RX_TYPE         RX_TYPE_PPM
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** I2C /Baro/Mag/Pitot ********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define DEFAULT_I2C_BUS         BUS_I2C1

#define USE_IMU_MPU6050
#define IMU_MPU6050_ALIGN       CW0_DEG
#define MPU6050_I2C_BUS         BUS_I2C1

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP085
#define USE_BARO_BMP280


#define USE_MAG
// #define AK8963_SPI_BUS          BUS_SPI2
// #define AK8963_CS_PIN           PB12
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_AK8963
#define USE_MAG_AK8975
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_LIS3MDL
#define USE_MAG_MPU9250

#define MAG_HMC5883_ALIGN CW0_DEG

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0
#define ADC_CHANNEL_1_PIN           PB0
#define ADC_CHANNEL_2_PIN           PA5
#define ADC_CHANNEL_3_PIN           PA6
#define ADC_CHANNEL_4_PIN           PA7

#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3
#define AIRSPEED_ADC_CHANNEL        ADC_CHN_4

#define USE_LED_STRIP
#define WS2811_PIN                      PA1

// ***************  OTHERS *************************
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_SOFTSERIAL )

#define USE_SPEKTRUM_BIND
#define BIND_PIN                PA3 //  RX1

#define USE_DSHOT
#define USE_ESC_SENSOR

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS       9
