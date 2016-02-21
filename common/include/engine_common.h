#pragma once

//  INTERFACE DECLARATION MACRO
//
//  Gives a common safe pattern for classes-as-interfaces
#define DECLARE_INTERFACE(ClassName)                                         \
   public :                                                                  \
      virtual ~ClassName() {}                                                \
   protected :                                                               \
      ClassName() {}                                                         \
      ClassName(const ClassName & ) {}                                       \
      ClassName & operator = (const ClassName & ) { return *this ; }         \
   private :
