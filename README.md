# tabeltop-pinball
A smal tabeltop version of pinball made from scratch using lasercutting and 3d printing.

## features
  - 2 flippers
  - 2 bonus options
  - 2 slingshots
  - lights
  - sound
  - 4 targets
  - scoers for more player's
  - hook for table + rubber feet
## bonusses
  - hit all 4 targets
  - get the ball in the hole next to the flipper.


## electronics
  - [x] 9x IRLZ44N mosfet
  - [x] 9x diode
  - [x] 9x 1k resistor
  - [ ] 9x 100 resistor
  - [x] 9x Hs-1040B solenoid
  - [x] 9x microswitches + 5x extra
  - [x] 1x uno
  - [x] 2x lcd
  - [x] buck coverter
  - [x] dc jack
  - [x] rgb leds
    
## circuits
  ### solenoid
                      +12 V
                      │
                      │
                  SOLENOID
                      │
                      │
                      ├─────────────┐
                      │             │
                      │           diode
                      │          ──|<|──
                      │             │
                    Drain           │
                  ┌────────┐        │
    Arduino D9 ─100Ω──┤ Gate   │        │
                      │ IRLZ44N├────────┘
                      └───┬────┘
                          │
                        Source
                          │
                         GND
                          │
    Arduino GND ──────────┘
                          
    Gate
     │
    10 kΩ
     │
    GND

  

