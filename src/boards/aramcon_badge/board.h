#ifndef ARAMCON_BADGE_H
#define ARAMCON_BADGE_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER       1
#define LED_PRIMARY_PIN   _PINNUM(1, 11) // Red

#define LED_NEOPIXEL          _PINNUM(0, 8)
#define NEOPIXELS_NUMBER      1
#define BOARD_RGB_BRIGHTNESS  0x040404
#define LED_STATE_ON      0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER 2
#define BUTTON_1              _PINNUM(0, 2)
#define BUTTON_2              _PINNUM(0, 29)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

/*------------------------------------------------------------------*/
/* UART
 *------------------------------------------------------------------*/
#define RX_PIN_NUMBER  20
#define TX_PIN_NUMBER  17
#define CTS_PIN_NUMBER 15
#define RTS_PIN_NUMBER 13
#define HWFC           false

// Used as model string in OTA mode
#define BLEDIS_MANUFACTURER  "Aramcon"
#define BLEDIS_MODEL         "AramBadge"

#define UF2_PRODUCT_NAME          "Aramcon AramBadge"
#define UF2_VOLUME_LABEL          "ARAMBOOT"
#define UF2_BOARD_ID            "Aramcon-AramBadge"
#define UF2_INDEX_URL           "https://github.com/urish/aramcon-badge"
#endif // ARAMCON_BADGE_H
