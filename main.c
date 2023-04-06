#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{

	// menu
	int menu, menu3;

	// case 1
	int panjang, lebar;
	int input1 = 0;

	// case 2
	int i, j;
	int input2 = 0;

	// case 3
	int input_case2 = 0;

	// case 4
	char abjad = 'A';
	// case 6
	int baris;

	do
	{
		system("cls");
		printf("\n------- UGD TIPE A -------");
		printf("\n1. Input Panjang Lebar");
		printf("\n2. Show Rak Buku");
		printf("\n3. Putar Rak Buku");
		printf("\n4. Pola dari abjad[Bonous]");
		printf("\n5. Rak Buku Berbatas[Bonous]");
		printf("\n6. Membuat sayap segitiga[Tugas]");
		printf("\n0. Exit");
		printf("\n>>>>> ");
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
		{
			input1 = 0;
			printf("\nMasukan Lebar	: ");
			scanf("%d", &lebar);

			while (input1 != 1)
			{
				printf("\nMasukan Panjang	: ");
				scanf("%d", &panjang);
				if (lebar == panjang)
				{
					printf("\n\t[!]Lebar harus lebih besar atau lebih kecil dari panjang");
					continue;
				}
				else
				{
					printf("\n\t[*] Berhasil input");
					input1++;
					input2++;
				}
			}
		}
		break;

		case 2:
		{
			if (input1 == 1)
			{
				for (i = 1; i <= lebar; i++)
				{
					for (j = 1; j <= panjang; j++)
					{
						printf("| ");
					}
					printf("\n");
				}
				printf("\n\t[*]Lemari Onlen dengan Panjang %d dan lebar %d", panjang, lebar);
				input2++;
			}
			else
			{
				printf("\n[!]Input dahulu ngabz");
			}
		}
		break;

		case 3:
		{
			if (input1 == 1)
			{
				do
				{
					system("cls");
					printf("\n\t---PUTAR RAK---");
					printf("\n1. Ke atas");
					printf("\n2. Ke Bawah");
					printf("\n0. Back");
					printf("\n>>>>> ");
					scanf("%d", &menu3);

					switch (menu3)
					{
					case 1:
					{
						if (input2 == 1 || input2 == 2)
						{
							printf("[!]Sudah di putar ke sini");
						}
						else
						{
							for (i = 1; i <= lebar; i++)
							{
								for (j = 1; j <= panjang; j++)
								{
									printf("| ");
								}
								printf("\n");
							}
							printf("\n\t[*]Berhasil Putar rak");
							input2++;
							input_case2 = 0;
						}
					}
					break;
					case 2:
					{
						if (input_case2 == 1)
						{
							printf("\n\t[!]Sudah di putar ke sini");
						}
						else
						{
							for (i = 1; i <= panjang; i++)
							{
								for (j = 1; j <= lebar; j++)
								{
									printf("| ");
								}
								printf("\n");
							}
							printf("\n\t[*]Berhasil Putar rak");
							input_case2++;
							input2 = 0;
						}
					}
					break;

					case 0:
					{
					}
					break;

					default:
					{
						printf("\n[!]Menu tidak ada");
					}
					}
					getch();
				} while (menu3 != 0);
			}
			else
			{
				printf("\n\t[!]Input data dulu");
			}
		}
		break;

		case 4: // bonus
		{
			if (input1 == 1)
			{
				abjad = 'A';
				for (i = 1; i <= lebar; i++)
				{
					for (j = 1; j <= panjang; j++)
					{

						printf("%c ", abjad++);
						if (abjad > 'G')
						{
							abjad = 'A';
						}
					}
					printf("\n");
				}
				printf("\n\t[*]Berhasil membuat pola abjad");
			}
			else
			{
				printf("\n\t[!]Silahkan melakukan input terlebih dahulu");
			}
		}
		break;

		case 5: // bonus
		{
			if (input1 == 1)
			{
				for (i = 1; i <= lebar; i++)
				{
					for (j = 1; j <= panjang; j++)
					{
						if (i == 1 || i == lebar || j == 1 || j == panjang)
						{
							printf("* ");
						}
						else
						{
							printf("| ");
						}
					}
					printf("\n");
				}
				printf("\n\t[*]Berhasil Membuat Rak Berbatas");
			}
			else
			{
				printf("\n\t[!]Input terlebih dahulu");
			}
		}
		break;

		case 6: // tugas
		{
			printf("\nMasukan Jumlah Baris	: ");
			scanf("%d", &baris);

			for (i = baris; i >= 1; i--)
			{
				for (j = 1; j <= i; j++)
				{
					printf("* ");
				}
				printf("\n");
			}

			printf("\n");

			for (i = 1; i <= baris; i++)
			{
				for (j = 1; j <= i; j++)
				{
					printf("* ");
				}
				printf("\n");
			}
		}
		break;

		case 0:
		{
			printf("\n\tAntonius Hardiantono Karurukan - 220711690 - Kelas A");
		}
		break;

		default:
			printf("\n\tMenu tidak ada");
			break;
		}
		getch();
	} while (menu != 0);
	return 0;
}
