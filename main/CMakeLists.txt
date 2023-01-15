idf_component_register(SRCS "main.cpp"
                    INCLUDE_DIRS "." "../include" "../include/Auxiliary" "../include/Interfaces" "../include/Modules" "../include/Words" "../include/ESP32")
spiffs_create_partition_image(storage ../add_ons FLASH_IN_PROJECT)