...(�߷�)
turn++; //���� ���ɸ� ���¶�� turn++; ���� poison_status++;�ϱ�. (���� poison_status�� �̸� 0���� �ʱ�ȭ�ؾ���)

if (poison_status == 1) { //���� �ɸ� �����϶�
	new_tern_poison++;
	if (old_tern_poison++ < new_tern_poison) { // old = �̹� ���������� ���� ������ �� < new = ������ �� �������� ������.  |||  �� old�� �������� ����� �������� ++�ϰ�, new�� �Ϲ� Turn�� �������� ++�ϸ� �ȴ�.
		poison_Damage = 0; //���������� �� ������ ����� �ʱ�ȭ
		poison_Damage += (player_HP / 8) + ((player_HP / 13) * new_tern_poison); // �������� ���� : �÷��̾��� �����ִ� HP�� 8���� 1 + �÷��̾��� �����ִ� HP�� 13���� 1 ���ϱ� ���� ���ӵ� ��(�� ���� ������ ���� �������� �͵����� ȿ��)
		player_HP -= poison_Damage; // �������� ����
		old_tern_poison++; // �������� ����� �������Ƿ� old++;

		printf("����� ���� �������� : %d", poison_Damage);
		printf("����� HP : %d", player_HP);
	}
}