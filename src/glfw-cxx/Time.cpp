#include <glfw-cxx/Time.hpp>

namespace glfw
{
	double Time::Get()
	{
		return glfwGetTime();
	}

	void Time::Set(double time_)
	{
		glfwSetTime(time_);
	}
}