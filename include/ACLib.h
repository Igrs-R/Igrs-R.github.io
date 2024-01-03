#ifndef __ACLIB_H__
#define __ACLIB_H__
#ifdef ACLIB_EXPORTS
#define DECLSPEC extern "C" __declspec(dllexport)
#else				    
#define DECLSPEC extern "C" __declspec(dllimport)
/*
* @brief Entry point for the application.
*/
extern "C" int ACLib_main(int argc, char* argv[]);
#endif // ACLIB_EXPORTS
/*
* @namespace ACLib
* @brief Namespace for the library.
*/
namespace ACLib
{
	/**
	* @class Object
	* @brief This is the root class.
	*/
	class Object
	{
	public:
		/**
		* @brief Release the Object and its memory.
		* @return Bool value.
		* @retval true Successful.
		* @retval false Error occurred.
		*/
		virtual bool Release(void) = 0;
	};
	/**
	* @brief For checking library operation.
	* @code{.cpp}
	* // Example of using the OperationCheck function
	*#include <ACLib.h>
	*using namespace ACLib;
	* int main()
	* {
	* 	OperationCheck();
	* 	return 0;
	*  }  
	* }
	* @endcode
	*/
	DECLSPEC void OperationCheck(void);
}
#define main ACLib_main
#endif // !__ACLIB_H__
