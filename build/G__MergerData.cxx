// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MergerData
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
#include "include/BigRIPSTreeData.h"
#include "include/OutputTreeData.hpp"
#include "trace_analyzer/PspmtAnalyzerData.hpp"
#include "trace_analyzer/PspmtData.hpp"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *TreeData_Dictionary();
   static void TreeData_TClassManip(TClass*);
   static void *new_TreeData(void *p = 0);
   static void *newArray_TreeData(Long_t size, void *p);
   static void delete_TreeData(void *p);
   static void deleteArray_TreeData(void *p);
   static void destruct_TreeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TreeData*)
   {
      ::TreeData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TreeData));
      static ::ROOT::TGenericClassInfo 
         instance("TreeData", "BigRIPSTreeData.h", 19,
                  typeid(::TreeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TreeData_Dictionary, isa_proxy, 4,
                  sizeof(::TreeData) );
      instance.SetNew(&new_TreeData);
      instance.SetNewArray(&newArray_TreeData);
      instance.SetDelete(&delete_TreeData);
      instance.SetDeleteArray(&deleteArray_TreeData);
      instance.SetDestructor(&destruct_TreeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TreeData*)
   {
      return GenerateInitInstanceLocal((::TreeData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TreeData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TreeData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TreeData*)0x0)->GetClass();
      TreeData_TClassManip(theClass);
   return theClass;
   }

   static void TreeData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *OutputTreeDatalEPspmtDatacOTreeDatagR_Dictionary();
   static void OutputTreeDatalEPspmtDatacOTreeDatagR_TClassManip(TClass*);
   static void *new_OutputTreeDatalEPspmtDatacOTreeDatagR(void *p = 0);
   static void *newArray_OutputTreeDatalEPspmtDatacOTreeDatagR(Long_t size, void *p);
   static void delete_OutputTreeDatalEPspmtDatacOTreeDatagR(void *p);
   static void deleteArray_OutputTreeDatalEPspmtDatacOTreeDatagR(void *p);
   static void destruct_OutputTreeDatalEPspmtDatacOTreeDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OutputTreeData<PspmtData,TreeData>*)
   {
      ::OutputTreeData<PspmtData,TreeData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::OutputTreeData<PspmtData,TreeData> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("OutputTreeData<PspmtData,TreeData>", ::OutputTreeData<PspmtData,TreeData>::Class_Version(), "OutputTreeData.hpp", 9,
                  typeid(::OutputTreeData<PspmtData,TreeData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &OutputTreeDatalEPspmtDatacOTreeDatagR_Dictionary, isa_proxy, 4,
                  sizeof(::OutputTreeData<PspmtData,TreeData>) );
      instance.SetNew(&new_OutputTreeDatalEPspmtDatacOTreeDatagR);
      instance.SetNewArray(&newArray_OutputTreeDatalEPspmtDatacOTreeDatagR);
      instance.SetDelete(&delete_OutputTreeDatalEPspmtDatacOTreeDatagR);
      instance.SetDeleteArray(&deleteArray_OutputTreeDatalEPspmtDatacOTreeDatagR);
      instance.SetDestructor(&destruct_OutputTreeDatalEPspmtDatacOTreeDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OutputTreeData<PspmtData,TreeData>*)
   {
      return GenerateInitInstanceLocal((::OutputTreeData<PspmtData,TreeData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,TreeData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *OutputTreeDatalEPspmtDatacOTreeDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,TreeData>*)0x0)->GetClass();
      OutputTreeDatalEPspmtDatacOTreeDatagR_TClassManip(theClass);
   return theClass;
   }

   static void OutputTreeDatalEPspmtDatacOTreeDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR_Dictionary();
   static void OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR_TClassManip(TClass*);
   static void *new_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(void *p = 0);
   static void *newArray_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(Long_t size, void *p);
   static void delete_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(void *p);
   static void deleteArray_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(void *p);
   static void destruct_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)
   {
      ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>", ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::Class_Version(), "OutputTreeData.hpp", 9,
                  typeid(::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR_Dictionary, isa_proxy, 4,
                  sizeof(::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>) );
      instance.SetNew(&new_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR);
      instance.SetNewArray(&newArray_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR);
      instance.SetDelete(&delete_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR);
      instance.SetDeleteArray(&deleteArray_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR);
      instance.SetDestructor(&destruct_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)
   {
      return GenerateInitInstanceLocal((::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)0x0)->GetClass();
      OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR_TClassManip(theClass);
   return theClass;
   }

   static void OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_Dictionary();
   static void OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_TClassManip(TClass*);
   static void *new_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p = 0);
   static void *newArray_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(Long_t size, void *p);
   static void delete_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p);
   static void deleteArray_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p);
   static void destruct_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)
   {
      ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >", ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::Class_Version(), "OutputTreeData.hpp", 9,
                  typeid(::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >) );
      instance.SetNew(&new_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.SetNewArray(&newArray_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.SetDelete(&delete_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      instance.SetDestructor(&destruct_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)
   {
      return GenerateInitInstanceLocal((::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)0x0)->GetClass();
      OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
template <> atomic_TClass_ptr OutputTreeData<PspmtData,TreeData>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *OutputTreeData<PspmtData,TreeData>::Class_Name()
{
   return "OutputTreeData<PspmtData,TreeData>";
}

//______________________________________________________________________________
template <> const char *OutputTreeData<PspmtData,TreeData>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,TreeData>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int OutputTreeData<PspmtData,TreeData>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,TreeData>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *OutputTreeData<PspmtData,TreeData>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,TreeData>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *OutputTreeData<PspmtData,TreeData>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,TreeData>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::Class_Name()
{
   return "OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>";
}

//______________________________________________________________________________
template <> const char *OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::Class_Name()
{
   return "OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >";
}

//______________________________________________________________________________
template <> const char *OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TreeData(void *p) {
      return  p ? new(p) ::TreeData : new ::TreeData;
   }
   static void *newArray_TreeData(Long_t nElements, void *p) {
      return p ? new(p) ::TreeData[nElements] : new ::TreeData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TreeData(void *p) {
      delete ((::TreeData*)p);
   }
   static void deleteArray_TreeData(void *p) {
      delete [] ((::TreeData*)p);
   }
   static void destruct_TreeData(void *p) {
      typedef ::TreeData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TreeData

//______________________________________________________________________________
template <> void OutputTreeData<PspmtData,TreeData>::Streamer(TBuffer &R__b)
{
   // Stream an object of class OutputTreeData<PspmtData,TreeData>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(OutputTreeData<PspmtData,TreeData>::Class(),this);
   } else {
      R__b.WriteClassBuffer(OutputTreeData<PspmtData,TreeData>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_OutputTreeDatalEPspmtDatacOTreeDatagR(void *p) {
      return  p ? new(p) ::OutputTreeData<PspmtData,TreeData> : new ::OutputTreeData<PspmtData,TreeData>;
   }
   static void *newArray_OutputTreeDatalEPspmtDatacOTreeDatagR(Long_t nElements, void *p) {
      return p ? new(p) ::OutputTreeData<PspmtData,TreeData>[nElements] : new ::OutputTreeData<PspmtData,TreeData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_OutputTreeDatalEPspmtDatacOTreeDatagR(void *p) {
      delete ((::OutputTreeData<PspmtData,TreeData>*)p);
   }
   static void deleteArray_OutputTreeDatalEPspmtDatacOTreeDatagR(void *p) {
      delete [] ((::OutputTreeData<PspmtData,TreeData>*)p);
   }
   static void destruct_OutputTreeDatalEPspmtDatacOTreeDatagR(void *p) {
      typedef ::OutputTreeData<PspmtData,TreeData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::OutputTreeData<PspmtData,TreeData>

//______________________________________________________________________________
template <> void OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::Streamer(TBuffer &R__b)
{
   // Stream an object of class OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::Class(),this);
   } else {
      R__b.WriteClassBuffer(OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(void *p) {
      return  p ? new(p) ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData> : new ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>;
   }
   static void *newArray_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(Long_t nElements, void *p) {
      return p ? new(p) ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>[nElements] : new ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(void *p) {
      delete ((::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)p);
   }
   static void deleteArray_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(void *p) {
      delete [] ((::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>*)p);
   }
   static void destruct_OutputTreeDatalEOutputTreeDatalEPspmtDatacOTreeDatagRcOPspmtDatagR(void *p) {
      typedef ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>

//______________________________________________________________________________
template <> void OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p) {
      return  p ? new(p) ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > : new ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >;
   }
   static void *newArray_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >[nElements] : new ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p) {
      delete ((::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)p);
   }
   static void deleteArray_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p) {
      delete [] ((::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >*)p);
   }
   static void destruct_OutputTreeDatalEPspmtDatacOOutputTreeDatalEPspmtDatacOTreeDatagRsPgR(void *p) {
      typedef ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >

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
                  &vectorlEPspmtDatagR_Dictionary, isa_proxy, 0,
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

namespace {
  void TriggerDictionaryInitialization_libMergerData_Impl() {
    static const char* headers[] = {
"include/BigRIPSTreeData.h",
"include/OutputTreeData.hpp",
"trace_analyzer/PspmtAnalyzerData.hpp",
"trace_analyzer/PspmtData.hpp",
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
"/opt/root/6.18.04/include",
"/home/msingh9/vandle18/YSO_trace_analysis/merger/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMergerData dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$include/BigRIPSTreeData.h")))  TreeData;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$trace_analyzer/PspmtData.hpp")))  PspmtData;
template <class T, class U> class __attribute__((annotate("$clingAutoload$include/OutputTreeData.hpp")))  OutputTreeData;

)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMergerData dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/BigRIPSTreeData.h"
#include "include/OutputTreeData.hpp"
#include "trace_analyzer/PspmtAnalyzerData.hpp"
#include "trace_analyzer/PspmtData.hpp"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"OutputTreeData<OutputTreeData<PspmtData,TreeData>,PspmtData>", payloadCode, "@",
"OutputTreeData<PspmtData,OutputTreeData<PspmtData,TreeData> >", payloadCode, "@",
"OutputTreeData<PspmtData,TreeData>", payloadCode, "@",
"TreeData", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMergerData",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMergerData_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMergerData_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMergerData() {
  TriggerDictionaryInitialization_libMergerData_Impl();
}
