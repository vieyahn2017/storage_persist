typedef enum
{
	FPGA_DEV_SLAVE_BOARD_0 = 0,		/* for Altera FPGA*/
	FPGA_DEV_SLAVE_BOARD_1,
	FPGA_DEV_SLAVE_BOARD_2,
	FPGA_DEV_SLAVE_BOARD_3,
	FPGA_DEV_SLAVE_BOARD_4,
	FPGA_DEV_SLAVE_BOARD_5,
	FPGA_DEV_SLAVE_BOARD_MAX,	/*6*/

	FPGA_DEV_IO_BOARD_0 = FPGA_DEV_SLAVE_BOARD_MAX,	/*6*/

	FPGA_DEV_EXTEND_BOARD_0,  /*7*/
	FPGA_DEV_EXTEND_BOARD_1,  /*8*/
	FPGA_DEV_EXTEND_BOARD_2,  /*9*/
		
	FPGA_DEV_FAN_BOARD_0,	/*10*/

	FPGA_DEV_BOARD_MAX
} FPGA_DEV_BOARD_T;

int main(){

	printf("%d", FPGA_DEV_SLAVE_BOARD_MAX);

	return 0;
}