/* 1�� ��� */

...(�߷�)
turn++;

if (Paralysis_status == 1) {
	new_tern_Paralysis++;
	if (old_tern_Paralysis < new_tern_Paralysis) { // old = �̹� ��������� �� < new = ������ �� �������� ������.  |||  �� old�� ���� �� ����� �������� ++�ϰ�, new�� �Ϲ� Turn�� �������� ++�ϸ� �ȴ�.
		Paralysis_tern--; //���Ǿ����Ƿ� ���� �� ����
		
		printf("����Ǿ� ������ �� �����ϴ�.");
		printf("����� HP : %d", player_HP);
	}
}



/* 2�� ��� */

...(�߷�)
turn++;

if (Paralysis_status == 1) {
	new_tern_Paralysis++;
	if (old_tern_Paralysis < new_tern_Paralysis) { // old = �̹� ��������� �� < new = ������ �� �������� ������.  |||  �� old�� ���� �� ����� �������� ++�ϰ�, new�� �Ϲ� Turn�� �������� ++�ϸ� �ȴ�.
		Paralysis_random_number = rand(); //����
		attack_or_nonattack = (int)Paralysis_random_number % 10;
		if (attack_or_nonattack <= 6) { //6�̸��϶�
			printf("����Ǿ� ������ �� �����ϴ�.");
			Paralysis_tern--; //���Ǿ����Ƿ� ���� �� ����
		}
		if (attack_or_nonattack >= 7 && attack_or_nonattack <= 9) { //���� 7�̻� 9�̸��϶� - �� ������ ȿ���� �հ� ������ �� �ִ� ��Ȳ�϶�
			(�Ϲݰ��������� �ְų�)
			printf("�׳� ������ �ְų�"); //printf("");
			sleep(0); //�����ð��� �־ ���� ����ų�
		}
		(2��°, 3��° ����� ���ߴٸ� ���⿡ �Ϲݰ��������� �ֱ�)
		printf("����� HP : %d", player_HP);
	}
}