#include <stdio.h>
int main()
{
	/* ������ */
	int First_select; //ĳ���͸� ���ϴ� ����
	int Second_select; //���ӽ��۰� �������ʱ�ȭ�� ������ �������� ���ϴ� ����
	int Number_of_plays; //�÷����� �ܼ��� �����ϴ� ����.(���� �����ϱ� ���� �����͸� �ʱ�ȭ�Ҳ��� �������� ���� �Ǵܿ� ���)
	int Continue_or_Reset; //ĳ���͸� ���� ������ �����ϱ� �� ����Ҳ��� �ʱ�ȭ�Ҳ��� �����ϴ� ����

	/* ĳ���Ϳ� �÷��̾� ���� */
	int Attacker_HP = 130, Attacker_ATK = 120, Attacker_DEF = 50; //Attacker �⺻����
	int Defender_HP = 200, Defender_ATK = 60, Defender_DRF = 100; //Depender �⺻����
	int Allrounder_HP = 100, Allrounder_ATK = 100, Allrounder_DEF = 100; //Allrounder �⺻����
	int Player_HP, Player_ATK, Player_DEF; //�� �������� ����ϴ� ����(������ ĳ������ �ɷ�ġ�� ������ ����ϴ� ����)
	int LV, EXP; //�÷��̾� ����ġ

	/* ������ */
	int Attack_Num;

	printf("\n[MAIN] --Welcome to HDR 1vs1--\n\n\n"); //����
	while (1) {
		while (1) {
			printf("<<���ӽ����� 1��, �������ʱ�ȭ�� 2��, ����� 3���� �Է����ּ���.>>\n"); //���μ�����
			scanf("%d", &First_select);
			if (First_select != 0) break;
		}
		while (1) {
			if (First_select == 1) {//ĳ���� ����
				printf("\n\n\"ĳ���͸� �����Ͻʽÿ�\"\n\n");
				printf(" [1]Attacker - ���ݿ� Ưȭ�Ǿ� �ֽ��ϴ�.\n [2]Defender - �� Ưȭ�Ǿ� �ֽ��ϴ�.\n [3]Allrounder - ���������Դϴ�.\n\n"); //ĳ���� ����
				scanf("%d", &Second_select);

				if (Second_select == 1) {
					Player_HP = Attacker_HP;
					Player_ATK = Attacker_ATK;
					Player_DEF = Attacker_DEF;
					printf("���ü���");//-----------------------------------------------------------------------------�� ���ķ� �����ϱ�(�ٸ� ������ ����ϳ�?)
				}

				if (Second_select == 99) { //ĳ���ͼ����� ����ϰ� ����ȭ������ ���ƿ;��Ҷ�
					break;
				}
				if (Number_of_plays > 0) { //�̹� ���� �÷����������
					printf("����� �̹� %d�÷��� �Ͽ����ϴ�.\n�÷����ϴ� �����Ͱ� �����־� �̴�� �����Ͻ� ��� ����� �ɷ�ġ�� ���� ������ ����˴ϴ�.\n", Number_of_plays);
					printf("<<����Ͻ÷��� 1��, �������ʱ�ȭ�� 2���� �Է����ּ���.>>\n");
					scanf("%d", &Continue_or_Reset);

					while (1) {
						if (Continue_or_Reset == 1) { //1��.����ϱ�
							printf("���� ������ �״�� ������ �����մϴ�.\n\n");
							break;
						}
						if (Continue_or_Reset == 2) {
							Attacker_HP = 130, Attacker_ATK = 120, Attacker_DEF = 50;
							Defender_HP = 200, Defender_ATK = 60, Defender_DRF = 100;
							Allrounder_HP = 100, Allrounder_ATK = 100, Allrounder_DEF = 100;
							LV = 0, EXP = 0;
							printf(" [�ʱ�ȭ�� �Ϸ�Ǿ����ϴ�!] \n");
							break;
						}
						else printf("�ٽ� �Է����ּ���.\n");
					}
				}

				printf("������ ���۵˴ϴ�!\n");

				printf(" -STAGE 1 : ������ ����"); //���ӽ���. STAGE 1
				printf("\n\n[STORY]\n����� ���� ���� �־���.\n������ ����� ���� �� ���� ��ҿ� ����� ���͵��� ���� ��Ÿ����, ���� ������ ���̶� �� ���� ����Ѵ�.\n �׸��� ����� ����� �ڸ� �i���ִ� ���͸� ���� �Ǵµ�..\n"); //STAGE 1 ���丮


				printf("������ �ұ�?\n");
				printf("[1]������    [2]������    [3]����    [4]����]\n�Է� -> ");
				scanf("%d", &Attack_Num);
			}
			if (First_select == 2) {
				Attacker_HP = 130, Attacker_ATK = 120, Attacker_DEF = 50;
				Defender_HP = 200, Defender_ATK = 60, Defender_DRF = 100;
				Allrounder_HP = 100, Allrounder_ATK = 100, Allrounder_DEF = 100;
				LV = 0, EXP = 0;
				printf(" [�ʱ�ȭ�� �Ϸ�Ǿ����ϴ�!] \n");
				break;
			}
			if (First_select == 3) {
				break;
			}
			else {
				printf("�ٽ� �Է����ּ���.\n");
				break;
			}
		}
	}
	printf("-> �̿��� �ּż� �����մϴ�!\n\n");
	return 0;
}

/*
������ : ������ ������� ����. (3�� Ű�� ������)
*/