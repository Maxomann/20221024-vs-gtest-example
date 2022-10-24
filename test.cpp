#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <filesystem>

TEST( foo, bar )
{
	std::filesystem::path p( "./" );

	std::cout << std::filesystem::absolute( p ) << std::endl;
}
