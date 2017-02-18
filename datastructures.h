// Do not edit this file until you know what it does

// Defines a strip of LEDs
typedef struct {
    CRGB* pixels;
    CHSV* colors;
    //uint8_t* sat;
    //uint8_t* val;
    int length;
    int pin;
} Strip;

// Defines a group of Strips
typedef struct {
    Strip* strips;
    int length;
} Group;

// Counter object used to cycle through animations
typedef struct {
    int button;
    int counter;
    bool lock;
    bool changed;
} Cycle_Actions;

// Stores data for a blinking animation
typedef struct {
    int duration;
    int cycle;
    CRGB color;
    CRGB on;
    CRGB off;
} Blinker;
