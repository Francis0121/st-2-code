// ����Ʈ �����Ͱ� ��������� �����ϴ� 2���� ���

// 1. ��������� ���� ������ �޸� �Ҵ�
//	  shared_ptr<> : C++ ǥ��, ��� Ÿ�Կ� ���� ��밡��
shared_ptr<int> p(new int); // ��� Ÿ�Կ� ���� ��� ����

// 2. ��ü ���ο� ��������� ����
//	  C++ ǥ���� �ƴ϶�
//	  �� ���̺귯���� ��ü������ �����ϴ� ���
//	  (�ȵ���̵� RefBase, sp)
//	  (Poco, ) Network Library
sp<int> p = new int; // �ɱ�? -> error . sp�� ����Ϸ��� RefBase �ڽø� �ȴ�.

// www.pocoproject.org
// \poco - 1.6.1/Foundation/include/Poco
