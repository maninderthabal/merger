// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__TraceAnalyzerData
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
#include "TraceAnalyzerData.hpp"
#include "PspmtAnalyzerData.hpp"
#include "PspmtData.hpp"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TraceAnalyzerData(void *p = 0);
   static void *newArray_TraceAnalyzerData(Long_t size, void *p);
   static void delete_TraceAnalyzerData(void *p);
   static void deleteArray_TraceAnalyzerData(void *p);
   static void destruct_TraceAnalyzerData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TraceAnalyzerData*)
   {
      ::TraceAnalyzerData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TraceAnalyzerData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TraceAnalyzerData", ::TraceAnalyzerData::Class_Version(), "TraceAnalyzerData.hpp", 6,
                  typeid(::TraceAnalyzerData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TraceAnalyzerData::Dictionary, isa_proxy, 4,
                  sizeof(::TraceAnalyzerData) );
      instance.SetNew(&new_TraceAnalyzerData);
      instance.SetNewArray(&newArray_TraceAnalyzerData);
      instance.SetDelete(&delete_TraceAnalyzerData);
      instance.SetDeleteArray(&deleteArray_TraceAnalyzerData);
      instance.SetDestructor(&destruct_TraceAnalyzerData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TraceAnalyzerData*)
   {
      return GenerateInitInstanceLocal((::TraceAnalyzerData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TraceAnalyzerData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *pspmt_data_struc_Dictionary();
   static void pspmt_data_struc_TClassManip(TClass*);
   static void *new_pspmt_data_struc(void *p = 0);
   static void *newArray_pspmt_data_struc(Long_t size, void *p);
   static void delete_pspmt_data_struc(void *p);
   static void deleteArray_pspmt_data_struc(void *p);
   static void destruct_pspmt_data_struc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pspmt_data_struc*)
   {
      ::pspmt_data_struc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pspmt_data_struc));
      static ::ROOT::TGenericClassInfo 
         instance("pspmt_data_struc", "PspmtAnalyzerData.hpp", 7,
                  typeid(::pspmt_data_struc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pspmt_data_struc_Dictionary, isa_proxy, 4,
                  sizeof(::pspmt_data_struc) );
      instance.SetNew(&new_pspmt_data_struc);
      instance.SetNewArray(&newArray_pspmt_data_struc);
      instance.SetDelete(&delete_pspmt_data_struc);
      instance.SetDeleteArray(&deleteArray_pspmt_data_struc);
      instance.SetDestructor(&destruct_pspmt_data_struc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pspmt_data_struc*)
   {
      return GenerateInitInstanceLocal((::pspmt_data_struc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::pspmt_data_struc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pspmt_data_struc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pspmt_data_struc*)0x0)->GetClass();
      pspmt_data_struc_TClassManip(theClass);
   return theClass;
   }

   static void pspmt_data_struc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_PspmtAnalyzerData(void *p = 0);
   static void *newArray_PspmtAnalyzerData(Long_t size, void *p);
   static void delete_PspmtAnalyzerData(void *p);
   static void deleteArray_PspmtAnalyzerData(void *p);
   static void destruct_PspmtAnalyzerData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PspmtAnalyzerData*)
   {
      ::PspmtAnalyzerData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PspmtAnalyzerData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PspmtAnalyzerData", ::PspmtAnalyzerData::Class_Version(), "PspmtAnalyzerData.hpp", 21,
                  typeid(::PspmtAnalyzerData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PspmtAnalyzerData::Dictionary, isa_proxy, 4,
                  sizeof(::PspmtAnalyzerData) );
      instance.SetNew(&new_PspmtAnalyzerData);
      instance.SetNewArray(&newArray_PspmtAnalyzerData);
      instance.SetDelete(&delete_PspmtAnalyzerData);
      instance.SetDeleteArray(&deleteArray_PspmtAnalyzerData);
      instance.SetDestructor(&destruct_PspmtAnalyzerData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PspmtAnalyzerData*)
   {
      return GenerateInitInstanceLocal((::PspmtAnalyzerData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PspmtAnalyzerData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *pspmt_struc_Dictionary();
   static void pspmt_struc_TClassManip(TClass*);
   static void *new_pspmt_struc(void *p = 0);
   static void *newArray_pspmt_struc(Long_t size, void *p);
   static void delete_pspmt_struc(void *p);
   static void deleteArray_pspmt_struc(void *p);
   static void destruct_pspmt_struc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pspmt_struc*)
   {
      ::pspmt_struc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pspmt_struc));
      static ::ROOT::TGenericClassInfo 
         instance("pspmt_struc", "PspmtData.hpp", 6,
                  typeid(::pspmt_struc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pspmt_struc_Dictionary, isa_proxy, 4,
                  sizeof(::pspmt_struc) );
      instance.SetNew(&new_pspmt_struc);
      instance.SetNewArray(&newArray_pspmt_struc);
      instance.SetDelete(&delete_pspmt_struc);
      instance.SetDeleteArray(&deleteArray_pspmt_struc);
      instance.SetDestructor(&destruct_pspmt_struc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pspmt_struc*)
   {
      return GenerateInitInstanceLocal((::pspmt_struc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::pspmt_struc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pspmt_struc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pspmt_struc*)0x0)->GetClass();
      pspmt_struc_TClassManip(theClass);
   return theClass;
   }

   static void pspmt_struc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *beamline_detector_struc_Dictionary();
   static void beamline_detector_struc_TClassManip(TClass*);
   static void *new_beamline_detector_struc(void *p = 0);
   static void *newArray_beamline_detector_struc(Long_t size, void *p);
   static void delete_beamline_detector_struc(void *p);
   static void deleteArray_beamline_detector_struc(void *p);
   static void destruct_beamline_detector_struc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::beamline_detector_struc*)
   {
      ::beamline_detector_struc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::beamline_detector_struc));
      static ::ROOT::TGenericClassInfo 
         instance("beamline_detector_struc", "PspmtData.hpp", 26,
                  typeid(::beamline_detector_struc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &beamline_detector_struc_Dictionary, isa_proxy, 4,
                  sizeof(::beamline_detector_struc) );
      instance.SetNew(&new_beamline_detector_struc);
      instance.SetNewArray(&newArray_beamline_detector_struc);
      instance.SetDelete(&delete_beamline_detector_struc);
      instance.SetDeleteArray(&deleteArray_beamline_detector_struc);
      instance.SetDestructor(&destruct_beamline_detector_struc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::beamline_detector_struc*)
   {
      return GenerateInitInstanceLocal((::beamline_detector_struc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::beamline_detector_struc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *beamline_detector_struc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::beamline_detector_struc*)0x0)->GetClass();
      beamline_detector_struc_TClassManip(theClass);
   return theClass;
   }

   static void beamline_detector_struc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *event_info_struc_Dictionary();
   static void event_info_struc_TClassManip(TClass*);
   static void *new_event_info_struc(void *p = 0);
   static void *newArray_event_info_struc(Long_t size, void *p);
   static void delete_event_info_struc(void *p);
   static void deleteArray_event_info_struc(void *p);
   static void destruct_event_info_struc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::event_info_struc*)
   {
      ::event_info_struc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::event_info_struc));
      static ::ROOT::TGenericClassInfo 
         instance("event_info_struc", "PspmtData.hpp", 32,
                  typeid(::event_info_struc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &event_info_struc_Dictionary, isa_proxy, 4,
                  sizeof(::event_info_struc) );
      instance.SetNew(&new_event_info_struc);
      instance.SetNewArray(&newArray_event_info_struc);
      instance.SetDelete(&delete_event_info_struc);
      instance.SetDeleteArray(&deleteArray_event_info_struc);
      instance.SetDestructor(&destruct_event_info_struc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::event_info_struc*)
   {
      return GenerateInitInstanceLocal((::event_info_struc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::event_info_struc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *event_info_struc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::event_info_struc*)0x0)->GetClass();
      event_info_struc_TClassManip(theClass);
   return theClass;
   }

   static void event_info_struc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_PspmtData(void *p = 0);
   static void *newArray_PspmtData(Long_t size, void *p);
   static void delete_PspmtData(void *p);
   static void deleteArray_PspmtData(void *p);
   static void destruct_PspmtData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PspmtData*)
   {
      ::PspmtData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PspmtData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PspmtData", ::PspmtData::Class_Version(), "PspmtData.hpp", 37,
                  typeid(::PspmtData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PspmtData::Dictionary, isa_proxy, 4,
                  sizeof(::PspmtData) );
      instance.SetNew(&new_PspmtData);
      instance.SetNewArray(&newArray_PspmtData);
      instance.SetDelete(&delete_PspmtData);
      instance.SetDeleteArray(&deleteArray_PspmtData);
      instance.SetDestructor(&destruct_PspmtData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PspmtData*)
   {
      return GenerateInitInstanceLocal((::PspmtData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PspmtData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TraceAnalyzerData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TraceAnalyzerData::Class_Name()
{
   return "TraceAnalyzerData";
}

//______________________________________________________________________________
const char *TraceAnalyzerData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TraceAnalyzerData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TraceAnalyzerData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TraceAnalyzerData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TraceAnalyzerData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TraceAnalyzerData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TraceAnalyzerData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TraceAnalyzerData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PspmtAnalyzerData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PspmtAnalyzerData::Class_Name()
{
   return "PspmtAnalyzerData";
}

//______________________________________________________________________________
const char *PspmtAnalyzerData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PspmtAnalyzerData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PspmtAnalyzerData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PspmtAnalyzerData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PspmtAnalyzerData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PspmtAnalyzerData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PspmtAnalyzerData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PspmtAnalyzerData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PspmtData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PspmtData::Class_Name()
{
   return "PspmtData";
}

//______________________________________________________________________________
const char *PspmtData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PspmtData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PspmtData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PspmtData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PspmtData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PspmtData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PspmtData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PspmtData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TraceAnalyzerData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TraceAnalyzerData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TraceAnalyzerData::Class(),this);
   } else {
      R__b.WriteClassBuffer(TraceAnalyzerData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TraceAnalyzerData(void *p) {
      return  p ? new(p) ::TraceAnalyzerData : new ::TraceAnalyzerData;
   }
   static void *newArray_TraceAnalyzerData(Long_t nElements, void *p) {
      return p ? new(p) ::TraceAnalyzerData[nElements] : new ::TraceAnalyzerData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TraceAnalyzerData(void *p) {
      delete ((::TraceAnalyzerData*)p);
   }
   static void deleteArray_TraceAnalyzerData(void *p) {
      delete [] ((::TraceAnalyzerData*)p);
   }
   static void destruct_TraceAnalyzerData(void *p) {
      typedef ::TraceAnalyzerData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TraceAnalyzerData

namespace ROOT {
   // Wrappers around operator new
   static void *new_pspmt_data_struc(void *p) {
      return  p ? new(p) ::pspmt_data_struc : new ::pspmt_data_struc;
   }
   static void *newArray_pspmt_data_struc(Long_t nElements, void *p) {
      return p ? new(p) ::pspmt_data_struc[nElements] : new ::pspmt_data_struc[nElements];
   }
   // Wrapper around operator delete
   static void delete_pspmt_data_struc(void *p) {
      delete ((::pspmt_data_struc*)p);
   }
   static void deleteArray_pspmt_data_struc(void *p) {
      delete [] ((::pspmt_data_struc*)p);
   }
   static void destruct_pspmt_data_struc(void *p) {
      typedef ::pspmt_data_struc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pspmt_data_struc

//______________________________________________________________________________
void PspmtAnalyzerData::Streamer(TBuffer &R__b)
{
   // Stream an object of class PspmtAnalyzerData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PspmtAnalyzerData::Class(),this);
   } else {
      R__b.WriteClassBuffer(PspmtAnalyzerData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PspmtAnalyzerData(void *p) {
      return  p ? new(p) ::PspmtAnalyzerData : new ::PspmtAnalyzerData;
   }
   static void *newArray_PspmtAnalyzerData(Long_t nElements, void *p) {
      return p ? new(p) ::PspmtAnalyzerData[nElements] : new ::PspmtAnalyzerData[nElements];
   }
   // Wrapper around operator delete
   static void delete_PspmtAnalyzerData(void *p) {
      delete ((::PspmtAnalyzerData*)p);
   }
   static void deleteArray_PspmtAnalyzerData(void *p) {
      delete [] ((::PspmtAnalyzerData*)p);
   }
   static void destruct_PspmtAnalyzerData(void *p) {
      typedef ::PspmtAnalyzerData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PspmtAnalyzerData

namespace ROOT {
   // Wrappers around operator new
   static void *new_pspmt_struc(void *p) {
      return  p ? new(p) ::pspmt_struc : new ::pspmt_struc;
   }
   static void *newArray_pspmt_struc(Long_t nElements, void *p) {
      return p ? new(p) ::pspmt_struc[nElements] : new ::pspmt_struc[nElements];
   }
   // Wrapper around operator delete
   static void delete_pspmt_struc(void *p) {
      delete ((::pspmt_struc*)p);
   }
   static void deleteArray_pspmt_struc(void *p) {
      delete [] ((::pspmt_struc*)p);
   }
   static void destruct_pspmt_struc(void *p) {
      typedef ::pspmt_struc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pspmt_struc

namespace ROOT {
   // Wrappers around operator new
   static void *new_beamline_detector_struc(void *p) {
      return  p ? new(p) ::beamline_detector_struc : new ::beamline_detector_struc;
   }
   static void *newArray_beamline_detector_struc(Long_t nElements, void *p) {
      return p ? new(p) ::beamline_detector_struc[nElements] : new ::beamline_detector_struc[nElements];
   }
   // Wrapper around operator delete
   static void delete_beamline_detector_struc(void *p) {
      delete ((::beamline_detector_struc*)p);
   }
   static void deleteArray_beamline_detector_struc(void *p) {
      delete [] ((::beamline_detector_struc*)p);
   }
   static void destruct_beamline_detector_struc(void *p) {
      typedef ::beamline_detector_struc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::beamline_detector_struc

namespace ROOT {
   // Wrappers around operator new
   static void *new_event_info_struc(void *p) {
      return  p ? new(p) ::event_info_struc : new ::event_info_struc;
   }
   static void *newArray_event_info_struc(Long_t nElements, void *p) {
      return p ? new(p) ::event_info_struc[nElements] : new ::event_info_struc[nElements];
   }
   // Wrapper around operator delete
   static void delete_event_info_struc(void *p) {
      delete ((::event_info_struc*)p);
   }
   static void deleteArray_event_info_struc(void *p) {
      delete [] ((::event_info_struc*)p);
   }
   static void destruct_event_info_struc(void *p) {
      typedef ::event_info_struc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::event_info_struc

//______________________________________________________________________________
void PspmtData::Streamer(TBuffer &R__b)
{
   // Stream an object of class PspmtData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PspmtData::Class(),this);
   } else {
      R__b.WriteClassBuffer(PspmtData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PspmtData(void *p) {
      return  p ? new(p) ::PspmtData : new ::PspmtData;
   }
   static void *newArray_PspmtData(Long_t nElements, void *p) {
      return p ? new(p) ::PspmtData[nElements] : new ::PspmtData[nElements];
   }
   // Wrapper around operator delete
   static void delete_PspmtData(void *p) {
      delete ((::PspmtData*)p);
   }
   static void deleteArray_PspmtData(void *p) {
      delete [] ((::PspmtData*)p);
   }
   static void destruct_PspmtData(void *p) {
      typedef ::PspmtData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PspmtData

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
   static TClass *vectorlEPspmtAnalyzerDatagR_Dictionary();
   static void vectorlEPspmtAnalyzerDatagR_TClassManip(TClass*);
   static void *new_vectorlEPspmtAnalyzerDatagR(void *p = 0);
   static void *newArray_vectorlEPspmtAnalyzerDatagR(Long_t size, void *p);
   static void delete_vectorlEPspmtAnalyzerDatagR(void *p);
   static void deleteArray_vectorlEPspmtAnalyzerDatagR(void *p);
   static void destruct_vectorlEPspmtAnalyzerDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<PspmtAnalyzerData>*)
   {
      vector<PspmtAnalyzerData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<PspmtAnalyzerData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<PspmtAnalyzerData>", -2, "vector", 210,
                  typeid(vector<PspmtAnalyzerData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEPspmtAnalyzerDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<PspmtAnalyzerData>) );
      instance.SetNew(&new_vectorlEPspmtAnalyzerDatagR);
      instance.SetNewArray(&newArray_vectorlEPspmtAnalyzerDatagR);
      instance.SetDelete(&delete_vectorlEPspmtAnalyzerDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEPspmtAnalyzerDatagR);
      instance.SetDestructor(&destruct_vectorlEPspmtAnalyzerDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<PspmtAnalyzerData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<PspmtAnalyzerData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPspmtAnalyzerDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<PspmtAnalyzerData>*)0x0)->GetClass();
      vectorlEPspmtAnalyzerDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPspmtAnalyzerDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPspmtAnalyzerDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PspmtAnalyzerData> : new vector<PspmtAnalyzerData>;
   }
   static void *newArray_vectorlEPspmtAnalyzerDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PspmtAnalyzerData>[nElements] : new vector<PspmtAnalyzerData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPspmtAnalyzerDatagR(void *p) {
      delete ((vector<PspmtAnalyzerData>*)p);
   }
   static void deleteArray_vectorlEPspmtAnalyzerDatagR(void *p) {
      delete [] ((vector<PspmtAnalyzerData>*)p);
   }
   static void destruct_vectorlEPspmtAnalyzerDatagR(void *p) {
      typedef vector<PspmtAnalyzerData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<PspmtAnalyzerData>

namespace {
  void TriggerDictionaryInitialization_libTraceAnalyzerData_Impl() {
    static const char* headers[] = {
"TraceAnalyzerData.hpp",
"PspmtAnalyzerData.hpp",
"PspmtData.hpp",
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
"/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libTraceAnalyzerData dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$PspmtData.hpp")))  PspmtData;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$PspmtAnalyzerData.hpp")))  PspmtAnalyzerData;
class __attribute__((annotate("$clingAutoload$TraceAnalyzerData.hpp")))  TraceAnalyzerData;
struct __attribute__((annotate("$clingAutoload$PspmtAnalyzerData.hpp")))  pspmt_data_struc;
struct __attribute__((annotate("$clingAutoload$PspmtData.hpp")))  pspmt_struc;
struct __attribute__((annotate("$clingAutoload$PspmtData.hpp")))  beamline_detector_struc;
struct __attribute__((annotate("$clingAutoload$PspmtData.hpp")))  event_info_struc;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTraceAnalyzerData dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TraceAnalyzerData.hpp"
#include "PspmtAnalyzerData.hpp"
#include "PspmtData.hpp"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"PspmtAnalyzerData", payloadCode, "@",
"PspmtData", payloadCode, "@",
"TraceAnalyzerData", payloadCode, "@",
"beamline_detector_struc", payloadCode, "@",
"event_info_struc", payloadCode, "@",
"pspmt_data_struc", payloadCode, "@",
"pspmt_struc", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTraceAnalyzerData",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTraceAnalyzerData_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTraceAnalyzerData_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTraceAnalyzerData() {
  TriggerDictionaryInitialization_libTraceAnalyzerData_Impl();
}
