// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Anamerger
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
#include "../include/AnamergerSelector.h"
#include "../include/AnamergerSparseSelector.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR_Dictionary();
   static void TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR_TClassManip(TClass*);
   static void delete_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR(void *p);
   static void deleteArray_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR(void *p);
   static void destruct_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >*)
   {
      ::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >));
      static ::ROOT::TGenericClassInfo 
         instance("TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >", "TTreeReaderValue.h", 140,
                  typeid(::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >) );
      instance.SetDelete(&delete_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR);
      instance.SetDestructor(&destruct_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >*)
   {
      return GenerateInitInstanceLocal((::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >*)0x0)->GetClass();
      TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR_Dictionary();
   static void TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR_TClassManip(TClass*);
   static void delete_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR(void *p);
   static void deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR(void *p);
   static void destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeReaderValue<vector<processor_struct::CLOVERS> >*)
   {
      ::TTreeReaderValue<vector<processor_struct::CLOVERS> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TTreeReaderValue<vector<processor_struct::CLOVERS> >));
      static ::ROOT::TGenericClassInfo 
         instance("TTreeReaderValue<vector<processor_struct::CLOVERS> >", "TTreeReaderValue.h", 140,
                  typeid(::TTreeReaderValue<vector<processor_struct::CLOVERS> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TTreeReaderValue<vector<processor_struct::CLOVERS> >) );
      instance.SetDelete(&delete_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR);
      instance.SetDeleteArray(&deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR);
      instance.SetDestructor(&destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR);

      ::ROOT::AddClassAlternate("TTreeReaderValue<vector<processor_struct::CLOVERS> >","TTreeReaderValue<std::vector<processor_struct::CLOVERS> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeReaderValue<vector<processor_struct::CLOVERS> >*)
   {
      return GenerateInitInstanceLocal((::TTreeReaderValue<vector<processor_struct::CLOVERS> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeReaderValue<vector<processor_struct::CLOVERS> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TTreeReaderValue<vector<processor_struct::CLOVERS> >*)0x0)->GetClass();
      TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR_Dictionary();
   static void TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR_TClassManip(TClass*);
   static void delete_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR(void *p);
   static void deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR(void *p);
   static void destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >*)
   {
      ::TTreeReaderValue<vector<processor_struct::GAMMASCINT> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >));
      static ::ROOT::TGenericClassInfo 
         instance("TTreeReaderValue<vector<processor_struct::GAMMASCINT> >", "TTreeReaderValue.h", 140,
                  typeid(::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >) );
      instance.SetDelete(&delete_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR);
      instance.SetDeleteArray(&deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR);
      instance.SetDestructor(&destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR);

      ::ROOT::AddClassAlternate("TTreeReaderValue<vector<processor_struct::GAMMASCINT> >","TTreeReaderValue<std::vector<processor_struct::GAMMASCINT> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >*)
   {
      return GenerateInitInstanceLocal((::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >*)0x0)->GetClass();
      TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR_Dictionary();
   static void TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR_TClassManip(TClass*);
   static void delete_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR(void *p);
   static void deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR(void *p);
   static void destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeReaderValue<vector<processor_struct::VANDLES> >*)
   {
      ::TTreeReaderValue<vector<processor_struct::VANDLES> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TTreeReaderValue<vector<processor_struct::VANDLES> >));
      static ::ROOT::TGenericClassInfo 
         instance("TTreeReaderValue<vector<processor_struct::VANDLES> >", "TTreeReaderValue.h", 140,
                  typeid(::TTreeReaderValue<vector<processor_struct::VANDLES> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TTreeReaderValue<vector<processor_struct::VANDLES> >) );
      instance.SetDelete(&delete_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR);
      instance.SetDeleteArray(&deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR);
      instance.SetDestructor(&destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR);

      ::ROOT::AddClassAlternate("TTreeReaderValue<vector<processor_struct::VANDLES> >","TTreeReaderValue<std::vector<processor_struct::VANDLES> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeReaderValue<vector<processor_struct::VANDLES> >*)
   {
      return GenerateInitInstanceLocal((::TTreeReaderValue<vector<processor_struct::VANDLES> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeReaderValue<vector<processor_struct::VANDLES> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TTreeReaderValue<vector<processor_struct::VANDLES> >*)0x0)->GetClass();
      TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_AnamergerSelector(void *p = 0);
   static void *newArray_AnamergerSelector(Long_t size, void *p);
   static void delete_AnamergerSelector(void *p);
   static void deleteArray_AnamergerSelector(void *p);
   static void destruct_AnamergerSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AnamergerSelector*)
   {
      ::AnamergerSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AnamergerSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AnamergerSelector", ::AnamergerSelector::Class_Version(), "AnamergerSelector.h", 29,
                  typeid(::AnamergerSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AnamergerSelector::Dictionary, isa_proxy, 4,
                  sizeof(::AnamergerSelector) );
      instance.SetNew(&new_AnamergerSelector);
      instance.SetNewArray(&newArray_AnamergerSelector);
      instance.SetDelete(&delete_AnamergerSelector);
      instance.SetDeleteArray(&deleteArray_AnamergerSelector);
      instance.SetDestructor(&destruct_AnamergerSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AnamergerSelector*)
   {
      return GenerateInitInstanceLocal((::AnamergerSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AnamergerSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AnamergerSparseSelector(void *p = 0);
   static void *newArray_AnamergerSparseSelector(Long_t size, void *p);
   static void delete_AnamergerSparseSelector(void *p);
   static void deleteArray_AnamergerSparseSelector(void *p);
   static void destruct_AnamergerSparseSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AnamergerSparseSelector*)
   {
      ::AnamergerSparseSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AnamergerSparseSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AnamergerSparseSelector", ::AnamergerSparseSelector::Class_Version(), "AnamergerSparseSelector.h", 38,
                  typeid(::AnamergerSparseSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AnamergerSparseSelector::Dictionary, isa_proxy, 4,
                  sizeof(::AnamergerSparseSelector) );
      instance.SetNew(&new_AnamergerSparseSelector);
      instance.SetNewArray(&newArray_AnamergerSparseSelector);
      instance.SetDelete(&delete_AnamergerSparseSelector);
      instance.SetDeleteArray(&deleteArray_AnamergerSparseSelector);
      instance.SetDestructor(&destruct_AnamergerSparseSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AnamergerSparseSelector*)
   {
      return GenerateInitInstanceLocal((::AnamergerSparseSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AnamergerSparseSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AnamergerSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AnamergerSelector::Class_Name()
{
   return "AnamergerSelector";
}

//______________________________________________________________________________
const char *AnamergerSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AnamergerSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AnamergerSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AnamergerSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AnamergerSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AnamergerSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AnamergerSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AnamergerSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AnamergerSparseSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AnamergerSparseSelector::Class_Name()
{
   return "AnamergerSparseSelector";
}

//______________________________________________________________________________
const char *AnamergerSparseSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AnamergerSparseSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AnamergerSparseSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AnamergerSparseSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AnamergerSparseSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AnamergerSparseSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AnamergerSparseSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AnamergerSparseSelector*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR(void *p) {
      delete ((::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >*)p);
   }
   static void deleteArray_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR(void *p) {
      delete [] ((::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >*)p);
   }
   static void destruct_TTreeReaderValuelEOutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgRsPgR(void *p) {
      typedef ::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR(void *p) {
      delete ((::TTreeReaderValue<vector<processor_struct::CLOVERS> >*)p);
   }
   static void deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR(void *p) {
      delete [] ((::TTreeReaderValue<vector<processor_struct::CLOVERS> >*)p);
   }
   static void destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLCLOVERSgRsPgR(void *p) {
      typedef ::TTreeReaderValue<vector<processor_struct::CLOVERS> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeReaderValue<vector<processor_struct::CLOVERS> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR(void *p) {
      delete ((::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >*)p);
   }
   static void deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR(void *p) {
      delete [] ((::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >*)p);
   }
   static void destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLGAMMASCINTgRsPgR(void *p) {
      typedef ::TTreeReaderValue<vector<processor_struct::GAMMASCINT> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeReaderValue<vector<processor_struct::GAMMASCINT> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR(void *p) {
      delete ((::TTreeReaderValue<vector<processor_struct::VANDLES> >*)p);
   }
   static void deleteArray_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR(void *p) {
      delete [] ((::TTreeReaderValue<vector<processor_struct::VANDLES> >*)p);
   }
   static void destruct_TTreeReaderValuelEvectorlEprocessor_structcLcLVANDLESgRsPgR(void *p) {
      typedef ::TTreeReaderValue<vector<processor_struct::VANDLES> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeReaderValue<vector<processor_struct::VANDLES> >

//______________________________________________________________________________
void AnamergerSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class AnamergerSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AnamergerSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(AnamergerSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AnamergerSelector(void *p) {
      return  p ? new(p) ::AnamergerSelector : new ::AnamergerSelector;
   }
   static void *newArray_AnamergerSelector(Long_t nElements, void *p) {
      return p ? new(p) ::AnamergerSelector[nElements] : new ::AnamergerSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_AnamergerSelector(void *p) {
      delete ((::AnamergerSelector*)p);
   }
   static void deleteArray_AnamergerSelector(void *p) {
      delete [] ((::AnamergerSelector*)p);
   }
   static void destruct_AnamergerSelector(void *p) {
      typedef ::AnamergerSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AnamergerSelector

//______________________________________________________________________________
void AnamergerSparseSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class AnamergerSparseSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AnamergerSparseSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(AnamergerSparseSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AnamergerSparseSelector(void *p) {
      return  p ? new(p) ::AnamergerSparseSelector : new ::AnamergerSparseSelector;
   }
   static void *newArray_AnamergerSparseSelector(Long_t nElements, void *p) {
      return p ? new(p) ::AnamergerSparseSelector[nElements] : new ::AnamergerSparseSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_AnamergerSparseSelector(void *p) {
      delete ((::AnamergerSparseSelector*)p);
   }
   static void deleteArray_AnamergerSparseSelector(void *p) {
      delete [] ((::AnamergerSparseSelector*)p);
   }
   static void destruct_AnamergerSparseSelector(void *p) {
      typedef ::AnamergerSparseSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AnamergerSparseSelector

namespace {
  void TriggerDictionaryInitialization_libAnamerger_Impl() {
    static const char* headers[] = {
"../include/AnamergerSelector.h",
"../include/AnamergerSparseSelector.h",
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
#line 1 "libAnamerger dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$PspmtData.hpp")))  __attribute__((annotate("$clingAutoload$../include/AnamergerSelector.h")))  PspmtData;
class __attribute__((annotate("$clingAutoload$BigRIPSTreeData.h")))  __attribute__((annotate("$clingAutoload$../include/AnamergerSelector.h")))  TreeData;
template <class T, class U> class __attribute__((annotate("$clingAutoload$OutputTreeData.hpp")))  __attribute__((annotate("$clingAutoload$../include/AnamergerSelector.h")))  OutputTreeData;

template <typename T> class __attribute__((annotate(R"ATTRDUMP(__cling__ptrcheck(off))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTreeReaderValue.h")))  __attribute__((annotate("$clingAutoload$../include/AnamergerSelector.h")))  TTreeReaderValue;

namespace processor_struct{struct __attribute__((annotate("$clingAutoload$PaassRootStruct.hpp")))  __attribute__((annotate("$clingAutoload$../include/AnamergerSelector.h")))  CLOVERS;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace processor_struct{struct __attribute__((annotate("$clingAutoload$PaassRootStruct.hpp")))  __attribute__((annotate("$clingAutoload$../include/AnamergerSelector.h")))  GAMMASCINT;}
namespace processor_struct{struct __attribute__((annotate("$clingAutoload$PaassRootStruct.hpp")))  __attribute__((annotate("$clingAutoload$../include/AnamergerSelector.h")))  VANDLES;}
class __attribute__((annotate("$clingAutoload$../include/AnamergerSelector.h")))  AnamergerSelector;
class __attribute__((annotate("$clingAutoload$../include/AnamergerSparseSelector.h")))  AnamergerSparseSelector;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAnamerger dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "../include/AnamergerSelector.h"
#include "../include/AnamergerSparseSelector.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"AnamergerSelector", payloadCode, "@",
"AnamergerSparseSelector", payloadCode, "@",
"TTreeReaderValue<OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >", payloadCode, "@",
"TTreeReaderValue<std::vector<processor_struct::CLOVERS> >", payloadCode, "@",
"TTreeReaderValue<std::vector<processor_struct::GAMMASCINT> >", payloadCode, "@",
"TTreeReaderValue<std::vector<processor_struct::VANDLES> >", payloadCode, "@",
"TTreeReaderValue<vector<processor_struct::CLOVERS> >", payloadCode, "@",
"TTreeReaderValue<vector<processor_struct::GAMMASCINT> >", payloadCode, "@",
"TTreeReaderValue<vector<processor_struct::VANDLES> >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAnamerger",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAnamerger_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAnamerger_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAnamerger() {
  TriggerDictionaryInitialization_libAnamerger_Impl();
}
