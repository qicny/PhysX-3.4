//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2018 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#include "EmitterGeomSphereParams_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace EmitterGeomSphereParams_0p0NS;

const char* const EmitterGeomSphereParams_0p0Factory::vptr =
    NvParameterized::getVptr<EmitterGeomSphereParams_0p0, EmitterGeomSphereParams_0p0::ClassAlignment>();

const uint32_t NumParamDefs = 3;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 2 },
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->emitterType), NULL, 0 }, // emitterType
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->radius), NULL, 0 }, // radius
};


bool EmitterGeomSphereParams_0p0::mBuiltFlag = false;
NvParameterized::MutexType EmitterGeomSphereParams_0p0::mBuiltFlagMutex;

EmitterGeomSphereParams_0p0::EmitterGeomSphereParams_0p0(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &EmitterGeomSphereParams_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

EmitterGeomSphereParams_0p0::~EmitterGeomSphereParams_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void EmitterGeomSphereParams_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~EmitterGeomSphereParams_0p0();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* EmitterGeomSphereParams_0p0::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* EmitterGeomSphereParams_0p0::getParameterDefinitionTree(void) const
{
	EmitterGeomSphereParams_0p0* tmpParam = const_cast<EmitterGeomSphereParams_0p0*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType EmitterGeomSphereParams_0p0::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType EmitterGeomSphereParams_0p0::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void EmitterGeomSphereParams_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<EmitterGeomSphereParams_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void EmitterGeomSphereParams_0p0::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void EmitterGeomSphereParams_0p0::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="emitterType"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("emitterType", TYPE_ENUM, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", "rate", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", "rate", true);
		HintTable[1].init("longDescription", "rate - The emitter will emit at the rate specified by the asset's rateRange\\n\ndensityOnce - The emitter will fill the geometry according to the asset's densityRange\\n\ndensityBrush - As the emitter moves, the emitter will fill the volume that is not already covered by the previous position\\n\nfill - The emitter will fill the volume with particles based on the particle size\\n\n", true);
		HintTable[2].init("shortDescription", "Emitter Type", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "rate", "densityOnce", "densityBrush", "fill" };
		ParamDefTable[1].setEnumVals((const char**)EnumVals, 4);




	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="radius"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("radius", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("gameScale", "true", true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("gameScale", "true", true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Sphere Radius", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);

		ParamDefTable[0].setChildren(Children, 2);
	}

	mBuiltFlag = true;

}
void EmitterGeomSphereParams_0p0::initStrings(void)
{
}

void EmitterGeomSphereParams_0p0::initDynamicArrays(void)
{
}

void EmitterGeomSphereParams_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	emitterType = (const char*)"rate";
	radius = float(1.0f);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void EmitterGeomSphereParams_0p0::initReferences(void)
{
}

void EmitterGeomSphereParams_0p0::freeDynamicArrays(void)
{
}

void EmitterGeomSphereParams_0p0::freeStrings(void)
{
}

void EmitterGeomSphereParams_0p0::freeReferences(void)
{
}

} // namespace parameterized
} // namespace nvidia
