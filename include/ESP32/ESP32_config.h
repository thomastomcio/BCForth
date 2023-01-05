#include <iostream>
#include <stdio.h>
#include <fcntl.h>
#include "esp_vfs_dev.h"
#include "driver/uart.h"
#include "esp_log.h"

static const char* TAG = "Forth ESP32 implementation";

void configure_ESP32()
{
    if (uart_driver_install(UART_NUM_0, 2*1024, 0, 0, NULL, 0) != ESP_OK) {
        ESP_LOGE(TAG, "Driver installation failed");
    }

    uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity    = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_DEFAULT,
    };

    uart_param_config(UART_NUM_0, &uart_config);

    esp_vfs_dev_uart_use_driver(UART_NUM_0);
}