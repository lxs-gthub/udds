// Don't modify this file as it will be overwritten.
//
#include "IDL_UserDataType.h"

UserDataType::UserDataType(const UserDataType &IDL_s){
  {
    char* IDL_elem1 = (char*)ch;
    char* IDL_elem2 = (char*)IDL_s.ch;
    for (unsigned long IDL_i = 0; IDL_i < 2; IDL_i++, IDL_elem1++,IDL_elem2++)
      *IDL_elem1 = *IDL_elem2;
  }
  {
    char* IDL_elem1 = (char*)md5;
    char* IDL_elem2 = (char*)IDL_s.md5;
    for (unsigned long IDL_i = 0; IDL_i < 128; IDL_i++, IDL_elem1++,IDL_elem2++)
      *IDL_elem1 = *IDL_elem2;
  }
}

UserDataType& UserDataType::operator= (const UserDataType &IDL_s){
  if (this == &IDL_s) return *this;
  {
    char* IDL_elem1 = (char*)ch;
    char* IDL_elem2 = (char*)IDL_s.ch;
    for (unsigned long IDL_i = 0; IDL_i < 2; IDL_i++, IDL_elem1++,IDL_elem2++)
      *IDL_elem1 = *IDL_elem2;
  }
  {
    char* IDL_elem1 = (char*)md5;
    char* IDL_elem2 = (char*)IDL_s.md5;
    for (unsigned long IDL_i = 0; IDL_i < 128; IDL_i++, IDL_elem1++,IDL_elem2++)
      *IDL_elem1 = *IDL_elem2;
  }
  return *this;
}

void UserDataType::Marshal(CDR *cdr) const {
  {
    char *IDL_elem = (char *) ch;
    for (unsigned long IDL_i = 0; IDL_i < 2; IDL_i++, IDL_elem++)
      cdr->PutChar((*IDL_elem));
  }

  {
    char *IDL_elem = (char *) md5;
    for (unsigned long IDL_i = 0; IDL_i < 128; IDL_i++, IDL_elem++)
      cdr->PutChar((*IDL_elem));
  }

}

void UserDataType::UnMarshal(CDR *cdr){
  {
    char *IDL_elem = (char *) ch;
    for (unsigned long IDL_i = 0; IDL_i < 2; IDL_i++, IDL_elem++)
      cdr->GetChar((*IDL_elem));
  }

  {
    char *IDL_elem = (char *) md5;
    for (unsigned long IDL_i = 0; IDL_i < 128; IDL_i++, IDL_elem++)
      cdr->GetChar((*IDL_elem));
  }

}

