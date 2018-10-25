#include <assert.h>
#include <stdio.h>
#include <camkes.h>

void irq0_event_ind(void *foo)
{
        (void)foo;

	/** Pull data from the registers */
	/*
	spi_trans_set_target_devid(ETH_NIC_SPI_ID);
	spi_trans_set_reg(RX_DATA_FIFO);
	spi_trans_exec();
	*/
}

void irq0__init(void)
{
        int error = irq0_reg_callback(&irq0_event_ind, 0);
        assert(error == 0);
}
