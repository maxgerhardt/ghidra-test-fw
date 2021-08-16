# ghidra-test-fw

## Build

1. Have PlatformIO installed (see [here](https://docs.platformio.org/en/latest/core/installation.html#installation-methods) or `sudo -H pip3 install platformio`)
2. Clone repo
3. Execute `pio run` in it 
4. Compiled firmware will be in `.pio/build/genericSTM32F103C8/firmware.elf`

A precompiled version of the firmware is in this repo as `firmware.elf` too.

## Start Renode (and GDB server)

1. Have Renode installed (https://github.com/renode/renode/releases and https://github.com/renode/renode/blob/master/README.rst#installation)
2. Make sure firmware has been built 
3. Make sure start_renode.sh script is executable (`chmod +x *.sh`)
4. `./start_renode.sh`
5. Once the console starts up, type `start` to start the firmware (GDB can be attached to the running system). Type `pause` to pause execution.

## Expected output 

The firmware should print "Hello, world! Nr. <x>" 2 times per second on UART2.

