// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Correction
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "../include/CorrectionSelector.h"
#include "../include/CorrectedVANDLEData.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_CorrectedVANDLEData(void *p = 0);
   static void *newArray_CorrectedVANDLEData(Long_t size, void *p);
   static void delete_CorrectedVANDLEData(void *p);
   static void deleteArray_CorrectedVANDLEData(void *p);
   static void destruct_CorrectedVANDLEData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CorrectedVANDLEData*)
   {
      ::CorrectedVANDLEData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CorrectedVANDLEData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CorrectedVANDLEData", ::CorrectedVANDLEData::Class_Version(), "CorrectedVANDLEData.h", 9,
                  typeid(::CorrectedVANDLEData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CorrectedVANDLEData::Dictionary, isa_proxy, 4,
                  sizeof(::CorrectedVANDLEData) );
      instance.SetNew(&new_CorrectedVANDLEData);
      instance.SetNewArray(&newArray_CorrectedVANDLEData);
      instance.SetDelete(&delete_CorrectedVANDLEData);
      instance.SetDeleteArray(&deleteArray_CorrectedVANDLEData);
      instance.SetDestructor(&destruct_CorrectedVANDLEData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CorrectedVANDLEData*)
   {
      return GenerateInitInstanceLocal((::CorrectedVANDLEData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CorrectedVANDLEData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CorrectionSelector(void *p = 0);
   static void *newArray_CorrectionSelector(Long_t size, void *p);
   static void delete_CorrectionSelector(void *p);
   static void deleteArray_CorrectionSelector(void *p);
   static void destruct_CorrectionSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CorrectionSelector*)
   {
      ::CorrectionSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CorrectionSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CorrectionSelector", ::CorrectionSelector::Class_Version(), "CorrectionSelector.h", 29,
                  typeid(::CorrectionSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CorrectionSelector::Dictionary, isa_proxy, 4,
                  sizeof(::CorrectionSelector) );
      instance.SetNew(&new_CorrectionSelector);
      instance.SetNewArray(&newArray_CorrectionSelector);
      instance.SetDelete(&delete_CorrectionSelector);
      instance.SetDeleteArray(&deleteArray_CorrectionSelector);
      instance.SetDestructor(&destruct_CorrectionSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CorrectionSelector*)
   {
      return GenerateInitInstanceLocal((::CorrectionSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CorrectionSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CorrectedVANDLEData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CorrectedVANDLEData::Class_Name()
{
   return "CorrectedVANDLEData";
}

//______________________________________________________________________________
const char *CorrectedVANDLEData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CorrectedVANDLEData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CorrectedVANDLEData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CorrectedVANDLEData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CorrectedVANDLEData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CorrectedVANDLEData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CorrectedVANDLEData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CorrectedVANDLEData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CorrectionSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CorrectionSelector::Class_Name()
{
   return "CorrectionSelector";
}

//______________________________________________________________________________
const char *CorrectionSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CorrectionSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CorrectionSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CorrectionSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CorrectionSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CorrectionSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CorrectionSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CorrectionSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CorrectedVANDLEData::Streamer(TBuffer &R__b)
{
   // Stream an object of class CorrectedVANDLEData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CorrectedVANDLEData::Class(),this);
   } else {
      R__b.WriteClassBuffer(CorrectedVANDLEData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CorrectedVANDLEData(void *p) {
      return  p ? new(p) ::CorrectedVANDLEData : new ::CorrectedVANDLEData;
   }
   static void *newArray_CorrectedVANDLEData(Long_t nElements, void *p) {
      return p ? new(p) ::CorrectedVANDLEData[nElements] : new ::CorrectedVANDLEData[nElements];
   }
   // Wrapper around operator delete
   static void delete_CorrectedVANDLEData(void *p) {
      delete ((::CorrectedVANDLEData*)p);
   }
   static void deleteArray_CorrectedVANDLEData(void *p) {
      delete [] ((::CorrectedVANDLEData*)p);
   }
   static void destruct_CorrectedVANDLEData(void *p) {
      typedef ::CorrectedVANDLEData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CorrectedVANDLEData

//______________________________________________________________________________
void CorrectionSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class CorrectionSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CorrectionSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(CorrectionSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CorrectionSelector(void *p) {
      return  p ? new(p) ::CorrectionSelector : new ::CorrectionSelector;
   }
   static void *newArray_CorrectionSelector(Long_t nElements, void *p) {
      return p ? new(p) ::CorrectionSelector[nElements] : new ::CorrectionSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_CorrectionSelector(void *p) {
      delete ((::CorrectionSelector*)p);
   }
   static void deleteArray_CorrectionSelector(void *p) {
      delete [] ((::CorrectionSelector*)p);
   }
   static void destruct_CorrectionSelector(void *p) {
      typedef ::CorrectionSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CorrectionSelector

namespace ROOT {
   static TClass *vectorlEprocessor_structcLcLVANDLESgR_Dictionary();
   static void vectorlEprocessor_structcLcLVANDLESgR_TClassManip(TClass*);
   static void *new_vectorlEprocessor_structcLcLVANDLESgR(void *p = 0);
   static void *newArray_vectorlEprocessor_structcLcLVANDLESgR(Long_t size, void *p);
   static void delete_vectorlEprocessor_structcLcLVANDLESgR(void *p);
   static void deleteArray_vectorlEprocessor_structcLcLVANDLESgR(void *p);
   static void destruct_vectorlEprocessor_structcLcLVANDLESgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<processor_struct::VANDLES>*)
   {
      vector<processor_struct::VANDLES> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<processor_struct::VANDLES>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<processor_struct::VANDLES>", -2, "vector", 210,
                  typeid(vector<processor_struct::VANDLES>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEprocessor_structcLcLVANDLESgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<processor_struct::VANDLES>) );
      instance.SetNew(&new_vectorlEprocessor_structcLcLVANDLESgR);
      instance.SetNewArray(&newArray_vectorlEprocessor_structcLcLVANDLESgR);
      instance.SetDelete(&delete_vectorlEprocessor_structcLcLVANDLESgR);
      instance.SetDeleteArray(&deleteArray_vectorlEprocessor_structcLcLVANDLESgR);
      instance.SetDestructor(&destruct_vectorlEprocessor_structcLcLVANDLESgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<processor_struct::VANDLES> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<processor_struct::VANDLES>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEprocessor_structcLcLVANDLESgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<processor_struct::VANDLES>*)0x0)->GetClass();
      vectorlEprocessor_structcLcLVANDLESgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEprocessor_structcLcLVANDLESgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEprocessor_structcLcLVANDLESgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<processor_struct::VANDLES> : new vector<processor_struct::VANDLES>;
   }
   static void *newArray_vectorlEprocessor_structcLcLVANDLESgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<processor_struct::VANDLES>[nElements] : new vector<processor_struct::VANDLES>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEprocessor_structcLcLVANDLESgR(void *p) {
      delete ((vector<processor_struct::VANDLES>*)p);
   }
   static void deleteArray_vectorlEprocessor_structcLcLVANDLESgR(void *p) {
      delete [] ((vector<processor_struct::VANDLES>*)p);
   }
   static void destruct_vectorlEprocessor_structcLcLVANDLESgR(void *p) {
      typedef vector<processor_struct::VANDLES> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<processor_struct::VANDLES>

namespace ROOT {
   static TClass *vectorlEprocessor_structcLcLGAMMASCINTgR_Dictionary();
   static void vectorlEprocessor_structcLcLGAMMASCINTgR_TClassManip(TClass*);
   static void *new_vectorlEprocessor_structcLcLGAMMASCINTgR(void *p = 0);
   static void *newArray_vectorlEprocessor_structcLcLGAMMASCINTgR(Long_t size, void *p);
   static void delete_vectorlEprocessor_structcLcLGAMMASCINTgR(void *p);
   static void deleteArray_vectorlEprocessor_structcLcLGAMMASCINTgR(void *p);
   static void destruct_vectorlEprocessor_structcLcLGAMMASCINTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<processor_struct::GAMMASCINT>*)
   {
      vector<processor_struct::GAMMASCINT> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<processor_struct::GAMMASCINT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<processor_struct::GAMMASCINT>", -2, "vector", 210,
                  typeid(vector<processor_struct::GAMMASCINT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEprocessor_structcLcLGAMMASCINTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<processor_struct::GAMMASCINT>) );
      instance.SetNew(&new_vectorlEprocessor_structcLcLGAMMASCINTgR);
      instance.SetNewArray(&newArray_vectorlEprocessor_structcLcLGAMMASCINTgR);
      instance.SetDelete(&delete_vectorlEprocessor_structcLcLGAMMASCINTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEprocessor_structcLcLGAMMASCINTgR);
      instance.SetDestructor(&destruct_vectorlEprocessor_structcLcLGAMMASCINTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<processor_struct::GAMMASCINT> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<processor_struct::GAMMASCINT>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEprocessor_structcLcLGAMMASCINTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<processor_struct::GAMMASCINT>*)0x0)->GetClass();
      vectorlEprocessor_structcLcLGAMMASCINTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEprocessor_structcLcLGAMMASCINTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEprocessor_structcLcLGAMMASCINTgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<processor_struct::GAMMASCINT> : new vector<processor_struct::GAMMASCINT>;
   }
   static void *newArray_vectorlEprocessor_structcLcLGAMMASCINTgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<processor_struct::GAMMASCINT>[nElements] : new vector<processor_struct::GAMMASCINT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEprocessor_structcLcLGAMMASCINTgR(void *p) {
      delete ((vector<processor_struct::GAMMASCINT>*)p);
   }
   static void deleteArray_vectorlEprocessor_structcLcLGAMMASCINTgR(void *p) {
      delete [] ((vector<processor_struct::GAMMASCINT>*)p);
   }
   static void destruct_vectorlEprocessor_structcLcLGAMMASCINTgR(void *p) {
      typedef vector<processor_struct::GAMMASCINT> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<processor_struct::GAMMASCINT>

namespace ROOT {
   static TClass *vectorlEprocessor_structcLcLCLOVERSgR_Dictionary();
   static void vectorlEprocessor_structcLcLCLOVERSgR_TClassManip(TClass*);
   static void *new_vectorlEprocessor_structcLcLCLOVERSgR(void *p = 0);
   static void *newArray_vectorlEprocessor_structcLcLCLOVERSgR(Long_t size, void *p);
   static void delete_vectorlEprocessor_structcLcLCLOVERSgR(void *p);
   static void deleteArray_vectorlEprocessor_structcLcLCLOVERSgR(void *p);
   static void destruct_vectorlEprocessor_structcLcLCLOVERSgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<processor_struct::CLOVERS>*)
   {
      vector<processor_struct::CLOVERS> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<processor_struct::CLOVERS>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<processor_struct::CLOVERS>", -2, "vector", 210,
                  typeid(vector<processor_struct::CLOVERS>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEprocessor_structcLcLCLOVERSgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<processor_struct::CLOVERS>) );
      instance.SetNew(&new_vectorlEprocessor_structcLcLCLOVERSgR);
      instance.SetNewArray(&newArray_vectorlEprocessor_structcLcLCLOVERSgR);
      instance.SetDelete(&delete_vectorlEprocessor_structcLcLCLOVERSgR);
      instance.SetDeleteArray(&deleteArray_vectorlEprocessor_structcLcLCLOVERSgR);
      instance.SetDestructor(&destruct_vectorlEprocessor_structcLcLCLOVERSgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<processor_struct::CLOVERS> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<processor_struct::CLOVERS>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEprocessor_structcLcLCLOVERSgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<processor_struct::CLOVERS>*)0x0)->GetClass();
      vectorlEprocessor_structcLcLCLOVERSgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEprocessor_structcLcLCLOVERSgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEprocessor_structcLcLCLOVERSgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<processor_struct::CLOVERS> : new vector<processor_struct::CLOVERS>;
   }
   static void *newArray_vectorlEprocessor_structcLcLCLOVERSgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<processor_struct::CLOVERS>[nElements] : new vector<processor_struct::CLOVERS>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEprocessor_structcLcLCLOVERSgR(void *p) {
      delete ((vector<processor_struct::CLOVERS>*)p);
   }
   static void deleteArray_vectorlEprocessor_structcLcLCLOVERSgR(void *p) {
      delete [] ((vector<processor_struct::CLOVERS>*)p);
   }
   static void destruct_vectorlEprocessor_structcLcLCLOVERSgR(void *p) {
      typedef vector<processor_struct::CLOVERS> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<processor_struct::CLOVERS>

namespace ROOT {
   static TClass *vectorlETreeDatagR_Dictionary();
   static void vectorlETreeDatagR_TClassManip(TClass*);
   static void *new_vectorlETreeDatagR(void *p = 0);
   static void *newArray_vectorlETreeDatagR(Long_t size, void *p);
   static void delete_vectorlETreeDatagR(void *p);
   static void deleteArray_vectorlETreeDatagR(void *p);
   static void destruct_vectorlETreeDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TreeData>*)
   {
      vector<TreeData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TreeData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TreeData>", -2, "vector", 210,
                  typeid(vector<TreeData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETreeDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TreeData>) );
      instance.SetNew(&new_vectorlETreeDatagR);
      instance.SetNewArray(&newArray_vectorlETreeDatagR);
      instance.SetDelete(&delete_vectorlETreeDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlETreeDatagR);
      instance.SetDestructor(&destruct_vectorlETreeDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TreeData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TreeData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETreeDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TreeData>*)0x0)->GetClass();
      vectorlETreeDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETreeDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETreeDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TreeData> : new vector<TreeData>;
   }
   static void *newArray_vectorlETreeDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TreeData>[nElements] : new vector<TreeData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETreeDatagR(void *p) {
      delete ((vector<TreeData>*)p);
   }
   static void deleteArray_vectorlETreeDatagR(void *p) {
      delete [] ((vector<TreeData>*)p);
   }
   static void destruct_vectorlETreeDatagR(void *p) {
      typedef vector<TreeData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TreeData>

namespace ROOT {
   static TClass *vectorlEPspmtDatagR_Dictionary();
   static void vectorlEPspmtDatagR_TClassManip(TClass*);
   static void *new_vectorlEPspmtDatagR(void *p = 0);
   static void *newArray_vectorlEPspmtDatagR(Long_t size, void *p);
   static void delete_vectorlEPspmtDatagR(void *p);
   static void deleteArray_vectorlEPspmtDatagR(void *p);
   static void destruct_vectorlEPspmtDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<PspmtData>*)
   {
      vector<PspmtData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<PspmtData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<PspmtData>", -2, "vector", 210,
                  typeid(vector<PspmtData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEPspmtDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<PspmtData>) );
      instance.SetNew(&new_vectorlEPspmtDatagR);
      instance.SetNewArray(&newArray_vectorlEPspmtDatagR);
      instance.SetDelete(&delete_vectorlEPspmtDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEPspmtDatagR);
      instance.SetDestructor(&destruct_vectorlEPspmtDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<PspmtData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<PspmtData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPspmtDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<PspmtData>*)0x0)->GetClass();
      vectorlEPspmtDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPspmtDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPspmtDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PspmtData> : new vector<PspmtData>;
   }
   static void *newArray_vectorlEPspmtDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PspmtData>[nElements] : new vector<PspmtData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPspmtDatagR(void *p) {
      delete ((vector<PspmtData>*)p);
   }
   static void deleteArray_vectorlEPspmtDatagR(void *p) {
      delete [] ((vector<PspmtData>*)p);
   }
   static void destruct_vectorlEPspmtDatagR(void *p) {
      typedef vector<PspmtData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<PspmtData>

namespace ROOT {
   static TClass *vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_Dictionary();
   static void vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_TClassManip(TClass*);
   static void *new_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p = 0);
   static void *newArray_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(Long_t size, void *p);
   static void delete_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p);
   static void deleteArray_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p);
   static void destruct_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<OutputTreeData<PspmtData,TreeData> >*)
   {
      vector<OutputTreeData<PspmtData,TreeData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<OutputTreeData<PspmtData,TreeData> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<OutputTreeData<PspmtData,TreeData> >", -2, "vector", 210,
                  typeid(vector<OutputTreeData<PspmtData,TreeData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<OutputTreeData<PspmtData,TreeData> >) );
      instance.SetNew(&new_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.SetNewArray(&newArray_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.SetDelete(&delete_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.SetDestructor(&destruct_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<OutputTreeData<PspmtData,TreeData> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<OutputTreeData<PspmtData,TreeData> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<OutputTreeData<PspmtData,TreeData> >*)0x0)->GetClass();
      vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<OutputTreeData<PspmtData,TreeData> > : new vector<OutputTreeData<PspmtData,TreeData> >;
   }
   static void *newArray_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<OutputTreeData<PspmtData,TreeData> >[nElements] : new vector<OutputTreeData<PspmtData,TreeData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p) {
      delete ((vector<OutputTreeData<PspmtData,TreeData> >*)p);
   }
   static void deleteArray_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p) {
      delete [] ((vector<OutputTreeData<PspmtData,TreeData> >*)p);
   }
   static void destruct_vectorlEOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p) {
      typedef vector<OutputTreeData<PspmtData,TreeData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<OutputTreeData<PspmtData,TreeData> >

namespace ROOT {
   static TClass *vectorlECorrectedVANDLEDatagR_Dictionary();
   static void vectorlECorrectedVANDLEDatagR_TClassManip(TClass*);
   static void *new_vectorlECorrectedVANDLEDatagR(void *p = 0);
   static void *newArray_vectorlECorrectedVANDLEDatagR(Long_t size, void *p);
   static void delete_vectorlECorrectedVANDLEDatagR(void *p);
   static void deleteArray_vectorlECorrectedVANDLEDatagR(void *p);
   static void destruct_vectorlECorrectedVANDLEDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CorrectedVANDLEData>*)
   {
      vector<CorrectedVANDLEData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CorrectedVANDLEData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CorrectedVANDLEData>", -2, "vector", 210,
                  typeid(vector<CorrectedVANDLEData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECorrectedVANDLEDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<CorrectedVANDLEData>) );
      instance.SetNew(&new_vectorlECorrectedVANDLEDatagR);
      instance.SetNewArray(&newArray_vectorlECorrectedVANDLEDatagR);
      instance.SetDelete(&delete_vectorlECorrectedVANDLEDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlECorrectedVANDLEDatagR);
      instance.SetDestructor(&destruct_vectorlECorrectedVANDLEDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CorrectedVANDLEData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CorrectedVANDLEData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECorrectedVANDLEDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CorrectedVANDLEData>*)0x0)->GetClass();
      vectorlECorrectedVANDLEDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECorrectedVANDLEDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECorrectedVANDLEDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CorrectedVANDLEData> : new vector<CorrectedVANDLEData>;
   }
   static void *newArray_vectorlECorrectedVANDLEDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CorrectedVANDLEData>[nElements] : new vector<CorrectedVANDLEData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECorrectedVANDLEDatagR(void *p) {
      delete ((vector<CorrectedVANDLEData>*)p);
   }
   static void deleteArray_vectorlECorrectedVANDLEDatagR(void *p) {
      delete [] ((vector<CorrectedVANDLEData>*)p);
   }
   static void destruct_vectorlECorrectedVANDLEDatagR(void *p) {
      typedef vector<CorrectedVANDLEData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CorrectedVANDLEData>

namespace {
  void TriggerDictionaryInitialization_libCorrection_Impl() {
    static const char* headers[] = {
"../include/CorrectionSelector.h",
"../include/CorrectedVANDLEData.h",
0
    };
    static const char* includePaths[] = {
"/opt/root/6.18.04/include",
"/home/msingh9/vandle18/YSO_trace_analysis/merger",
"/home/msingh9/vandle18/YSO_trace_analysis/merger/include",
"/home/msingh9/vandle18/YSO_trace_analysis/merger/anamerger/include",
"/home/msingh9/vandle18/YSO_trace_analysis/merger/tree_dump2",
"/home/msingh9/vandle18/YSO_trace_analysis/merger/trace_analyzer",
"/opt/yaml-cpp/lib/cmake/yaml-cpp/../../../include",
"/home/msingh9/vandle18/paass_riken2018/paass/install/include",
"/home/msingh9/vandle18/YSO_trace_analysis/merger/build/generated",
"/home/msingh9/vandle18/YSO_trace_analysis/merger/anamerger/source",
"/opt/root/6.18.04/include",
"/home/msingh9/vandle18/YSO_trace_analysis/merger/build/anamerger/source/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libCorrection dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace processor_struct{struct __attribute__((annotate("$clingAutoload$PaassRootStruct.hpp")))  __attribute__((annotate("$clingAutoload$../include/CorrectionSelector.h")))  CLOVERS;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace processor_struct{struct __attribute__((annotate("$clingAutoload$PaassRootStruct.hpp")))  __attribute__((annotate("$clingAutoload$../include/CorrectionSelector.h")))  GAMMASCINT;}
namespace processor_struct{struct __attribute__((annotate("$clingAutoload$PaassRootStruct.hpp")))  __attribute__((annotate("$clingAutoload$../include/CorrectionSelector.h")))  VANDLES;}
class __attribute__((annotate("$clingAutoload$CorrectedVANDLEData.h")))  __attribute__((annotate("$clingAutoload$../include/CorrectionSelector.h")))  CorrectedVANDLEData;
class __attribute__((annotate("$clingAutoload$PspmtData.hpp")))  __attribute__((annotate("$clingAutoload$../include/CorrectionSelector.h")))  PspmtData;
class __attribute__((annotate("$clingAutoload$BigRIPSTreeData.h")))  __attribute__((annotate("$clingAutoload$../include/CorrectionSelector.h")))  TreeData;
template <class T, class U> class __attribute__((annotate("$clingAutoload$OutputTreeData.hpp")))  __attribute__((annotate("$clingAutoload$../include/CorrectionSelector.h")))  OutputTreeData;

class __attribute__((annotate("$clingAutoload$../include/CorrectionSelector.h")))  CorrectionSelector;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCorrection dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "../include/CorrectionSelector.h"
#include "../include/CorrectedVANDLEData.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CorrectedVANDLEData", payloadCode, "@",
"CorrectionSelector", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libCorrection",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCorrection_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCorrection_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCorrection() {
  TriggerDictionaryInitialization_libCorrection_Impl();
}
