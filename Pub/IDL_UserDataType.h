// Don't modify this file as it will be overwritten.
//
#include "CDR/CDR.h"
#include "ReturnCode.h"
#include "BasicTypes.h"

#ifndef IDL_UserDataType_hh
#define IDL_UserDataType_hh

#ifndef UserDataType_defined
#define UserDataType_defined

struct UserDataType {
  UserDataType()
	{
		for (int i0=0;i0<2;i0++)
		{
			ch[i0] = 0;
		}
		for (int i0=0;i0<128;i0++)
		{
			md5[i0] = 0;
		}
	}

  UserDataType(const UserDataType  &IDL_s);

  ~UserDataType(){
	}

  	int StructSize()
	{
		int strSize = 0;
		strSize += sizeof(UserDataType);
		for (int i0=0;i0<2;i0++)
		{
		}
		for (int i0=0;i0<128;i0++)
		{
		}
		return strSize;
	}
  UserDataType& operator= (const UserDataType &IDL_s);

  void Marshal(CDR *cdr) const;
  void UnMarshal(CDR *cdr);

  char ch[2];
char md5[128];
  
};

typedef sequence<UserDataType> UserDataTypeSeq;

#endif




#endif /*IDL_UserDataType_hh */
