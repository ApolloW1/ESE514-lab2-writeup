if (TARGET tinyusb_device)
    add_executable(hello_usb_plus_led
            hello_usb_plus_led.c
            ws2812.c
            )

    # pull in common dependencies
    target_link_libraries(hello_usb_plus_led pico_stdlib hardware_pio)
    #target_link_libraries(pio_ws2812 PRIVATE pico_stdlib hardware_pio)
    
    # enable usb output, disable uart output
    pico_enable_stdio_usb(hello_usb_plus_led 1)
    pico_enable_stdio_uart(hello_usb_plus_led 0)

    # create map/bin/hex/uf2 file etc.
    pico_add_extra_outputs(hello_usb_plus_led)

    # add url via pico_set_program_url
    example_auto_set_url(hello_usb_plus_led)
elseif(PICO_ON_DEVICE)
    message(WARNING "not building hello_usb because TinyUSB submodule is not initialized in the SDK")
endif()
