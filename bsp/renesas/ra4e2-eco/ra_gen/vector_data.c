/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_NUM_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = sci_uart_rxi_isr, /* SCI9 RXI (Receive data full) */
            [1] = sci_uart_txi_isr, /* SCI9 TXI (Transmit data empty) */
            [2] = sci_uart_tei_isr, /* SCI9 TEI (Transmit end) */
            [3] = sci_uart_eri_isr, /* SCI9 ERI (Receive error) */
        };
        #if BSP_FEATURE_ICU_HAS_IELSR
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_NUM_ENTRIES] =
        {
            [0] = BSP_PRV_VECT_ENUM(EVENT_SCI9_RXI,GROUP0), /* SCI9 RXI (Receive data full) */
            [1] = BSP_PRV_VECT_ENUM(EVENT_SCI9_TXI,GROUP1), /* SCI9 TXI (Transmit data empty) */
            [2] = BSP_PRV_VECT_ENUM(EVENT_SCI9_TEI,GROUP2), /* SCI9 TEI (Transmit end) */
            [3] = BSP_PRV_VECT_ENUM(EVENT_SCI9_ERI,GROUP3), /* SCI9 ERI (Receive error) */
        };
        #endif
        #endif

