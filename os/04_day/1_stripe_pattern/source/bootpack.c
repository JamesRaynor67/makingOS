void io_hlt(void);
void write_mem8(int addr, int data);

void HariMain(void)
{
	int i;

	for (i = 0xa0000; i <= 0xaffff; i++) {
		(*(int *)i) = i & 0x0f;
		//write_mem8(i, i & 0x0f); /* MOV BYTE [i],15 */
	}

	for (;;) {
		io_hlt();
	}
}
