#define GLM_ENABLE_EXPERIMENTAL
#define GLM_SWIZZLE
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

//glm�� ��ü������ �ƴϴ�.(c�� ���)
/*
int main()
{
	glm::vec2 a(1.0f, 4.0f); //�׳� 1.0�̸� double��
	glm::vec3 b(1.0f, 4.0f, 2.0f);
	b = b * 3.0f;  //��Į�� ��(f�� �ٿ������)

	glm::vec3 c = glm::vec3(1, 1, 1);

	float l = glm::length(a); //���� ���̸� �����ִ� �Լ�

	glm::vec3 d = glm::normalize(c);  //���̰� 1�� ���Ժ��ͷ� �ٲٱ� -> c�� ����ȭ�ؼ� c�� �Ѱ��� or glm::vec3 d

	c.xyz = d.xyz;


	std:: cout <<glm::to_string(a)<<std::endl;

	return 0;
}
*/

int main()
{
	//Q1
	glm::vec3 P(1, 4, -5);
	glm::vec3 v(5, 1, 4);

	P += v;
	std::cout << glm::to_string(P) << std::endl;

	//Q2
	glm::vec3 v1(1, 0, 0);
	glm::vec3 v2(0, 1, 0);
	glm::vec3 v3 = v1 + v2;
	std::cout << glm::to_string(v3) << std::endl;

	//Q3
	glm::vec3 vv(0.0, 1.0, 0.0);
	vv = vv*2.0f;
	std::cout << glm::to_string(vv) << std::endl;

	//Q4
	glm::vec3 start(8, 2, 5);
	glm::vec3 end(1, -1, 4);
	glm::vec3 res = end - start;
	std::cout << glm::to_string(res) << std::endl;

	//Q5
	glm::vec3 v5(1, 3, 4);
	v5 = glm::normalize(v5);
	std::cout << glm::to_string(v5) << std::endl;

	//Q6
	glm::vec3 v6(1, -1, 4);
	glm::vec4 v7(v6, 0);
	std::cout << glm::to_string(v7) << std::endl;
	return 0;
}