#define GLM_ENABLE_EXPERIMENTAL
#define GLM_SWIZZLE
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtc/constants.hpp>

const double DEGREES_TO_RADIANS = glm::pi<float>() / 180.0;
const double RADIANS_TO_DEGREES = 180.0 / glm::pi<float>();  //세타는 무조건 라디안

int main()
{
	glm::vec3 v(2, -1, 1);
	glm::vec3 u(1, 1, 2);
	float d = glm::dot(v, u);  //벡터 내적

	float c = d / (glm::length(u) * glm::length(v));
	float res = glm::acos(c) * RADIANS_TO_DEGREES;  //세타 구하는 공식

	std::cout<<res;
	return 0;
}