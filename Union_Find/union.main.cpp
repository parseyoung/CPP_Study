// ������ ã�� (Union-Find) or ���μ� ���� �˰�����(Disjoint-Set)
// ��ǥ�� �׷��� �˰�����
// �θ� ��ĥ ���� �Ϲ������� �� ���� �� ������ ��ħ(Union)
// ������ Ȯ���ϱ� ���� �θ��常 ���� �ľ� �Ұ�, *����Լ� ���
// ũ�罺Į �˰�����(Kruskal Algorithm)�� �����Ͽ� ���� ����
#include <iostream>
// �θ� ��� ã�� �Լ�(�����)
int getParent(int parent[], int x)
{
	if (parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

// �� �θ� ��� ��ħ
int unionParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a < b) return parent[b] = a;
	return parent[a] = b;
}

// ���� �θ� �������� Ȯ��
bool findParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a == b) return 1;
	return 0;
}

int main(void) {

	int parent[11];
	for (int i = 1; i <= 10; i++) {
		parent[i] = i;
	}
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	std::cout << " 1�� 5�� ���� �Ǿ� �ֳ���?" << std::boolalpha << findParent(parent, 1, 5) << ' ' << std::endl;
	unionParent(parent, 1, 5);
	std::cout << " 1�� 5�� ���� �Ǿ� �ֳ���?" << std::boolalpha << findParent(parent, 1, 5) << ' ' << std::endl;


	return 0;
}