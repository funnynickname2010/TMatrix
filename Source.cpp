#include "TMatrix.h"
#define MyTypeScalar int

void ExpectedInput(int& target_variable, const char* text)
{
	do
	{
		std::cout << text;
		std::cin >> target_variable;
	} while (target_variable <= 0);
}

int main()
{
	int matrix_temp_size_lines_1 = 0;
	int matrix_temp_size_columns_1 = 0;
	int matrix_temp_size_lines_2 = 0;
	int matrix_temp_size_columns_2 = 0;

	ExpectedInput(matrix_temp_size_lines_1, "Input matrix_1 number of lines: ");
	ExpectedInput(matrix_temp_size_columns_1, "Input matrix_1 number of columns: ");

	//ExpectedInput(matrix_temp_size_lines_2, "Input matrix_2 number of lines: ");
	//ExpectedInput(matrix_temp_size_columns_2, "Input matrix_2 number of columns: ");
	std::cin.clear();

	TMatrix matrix1(matrix_temp_size_lines_1, matrix_temp_size_columns_1);
	TMatrix matrix2(matrix_temp_size_lines_2, matrix_temp_size_columns_2);


	
	std::cout << "Input matrix1: " << std::endl;

	try
	{
		std::cin >> matrix1;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}


	//std::cout << "Input matrix2: " << std::endl;
	//std::cin >> matrix2;

	std::cout << "+" << std::endl;
	try
	{
		std::cout << matrix1 + matrix2 << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-" << std::endl;
	try
	{
		std::cout << matrix1 - matrix2 << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "*" << std::endl;
	try
	{
		std::cout << matrix1 * matrix2 << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "* (scalar)" << std::endl;
	try
	{
		MyTypeScalar temp_scalar;
		std::cout << std::endl << "Input scalar: ";
		std::cin >> temp_scalar;
		std::cout << (matrix1 * temp_scalar) << std::endl;
		std::cout << (matrix2 * temp_scalar) << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "/" << std::endl;
	try
	{
		MyTypeScalar temp_scalar;
		std::cout << std::endl << "Input scalar: ";
		std::cin >> temp_scalar;
		std::cout << matrix1 / temp_scalar << std::endl;
		std::cout << matrix2 / temp_scalar << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "+=" << std::endl;
	try
	{
		std::cout << matrix1 << std::endl << matrix2 << std::endl;
		TMatrix res(matrix_temp_size_lines_1, matrix_temp_size_columns_1);

		res += matrix1 + matrix2;
		std::cout << res << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-=" << std::endl;
	try
	{
		TMatrix res(matrix1);
		res -= matrix2;
		std::cout << res << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "[]" << std::endl;
	try
	{
		unsigned int temp_lines_index1, temp_lines_index2, temp_columns_index1, temp_columns_index2;
		std::cout << "Input lines index for matrix_1: ";
		std::cin >> temp_lines_index1;
		std::cout << "Input columns index for matrix_1: ";
		std::cin >> temp_columns_index1;

		std::cout << matrix1[temp_lines_index1][temp_columns_index1] << std::endl;
		
		std::cout << "Input lines index for matrix_2: ";
		std::cin >> temp_lines_index2;
		std::cout << "Input columns index for matrix_2: ";
		std::cin >> temp_columns_index2;

		std::cout << matrix2[temp_lines_index2][temp_columns_index2] << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "==" << std::endl;
	try
	{
		std::cout << (matrix1 == matrix2) << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "!=" << std::endl;
	try
	{
		std::cout << (matrix1 != matrix2) << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}