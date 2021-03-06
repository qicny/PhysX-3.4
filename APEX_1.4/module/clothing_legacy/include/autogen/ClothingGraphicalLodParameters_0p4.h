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


#ifndef HEADER_ClothingGraphicalLodParameters_0p4_h
#define HEADER_ClothingGraphicalLodParameters_0p4_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace parameterized
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace ClothingGraphicalLodParameters_0p4NS
{

struct PhysicsSubmeshPartitioning_Type;
struct SkinClothMapB_Type;
struct SkinClothMapC_Type;
struct SkinClothMapD_Type;
struct TetraLink_Type;

struct STRING_DynamicArray1D_Type
{
	NvParameterized::DummyStringStruct* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct U32_DynamicArray1D_Type
{
	uint32_t* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct SkinClothMapB_DynamicArray1D_Type
{
	SkinClothMapB_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct SkinClothMapD_DynamicArray1D_Type
{
	SkinClothMapD_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct TetraLink_DynamicArray1D_Type
{
	TetraLink_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct PhysicsSubmeshPartitioning_DynamicArray1D_Type
{
	PhysicsSubmeshPartitioning_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct SkinClothMapC_Type
{
	physx::PxVec3 vertexBary;
	uint32_t faceIndex0;
	physx::PxVec3 normalBary;
	uint32_t vertexIndexPlusOffset;
};
struct PhysicsSubmeshPartitioning_Type
{
	uint32_t graphicalSubmesh;
	uint32_t physicalSubmesh;
	uint32_t numSimulatedVertices;
	uint32_t numSimulatedVerticesAdditional;
	uint32_t numSimulatedIndices;
};
struct SkinClothMapD_Type
{
	physx::PxVec3 vertexBary;
	uint32_t vertexIndex0;
	physx::PxVec3 normalBary;
	uint32_t vertexIndex1;
	physx::PxVec3 tangentBary;
	uint32_t vertexIndex2;
	uint32_t vertexIndexPlusOffset;
};
struct SkinClothMapB_Type
{
	physx::PxVec3 vtxTetraBary;
	uint32_t vertexIndexPlusOffset;
	physx::PxVec3 nrmTetraBary;
	uint32_t faceIndex0;
	uint32_t tetraIndex;
	uint32_t submeshIndex;
};
struct TetraLink_Type
{
	physx::PxVec3 vertexBary;
	uint32_t tetraIndex0;
	physx::PxVec3 normalBary;
	uint32_t _dummyForAlignment;
};

struct ParametersStruct
{

	STRING_DynamicArray1D_Type platforms;
	uint32_t lod;
	uint32_t physicalMeshId;
	NvParameterized::Interface* renderMeshAsset;
	void* renderMeshAssetPointer;
	U32_DynamicArray1D_Type immediateClothMap;
	SkinClothMapB_DynamicArray1D_Type skinClothMapB;
	SkinClothMapD_DynamicArray1D_Type skinClothMap;
	float skinClothMapThickness;
	float skinClothMapOffset;
	TetraLink_DynamicArray1D_Type tetraMap;
	uint32_t renderMeshAssetSorting;
	PhysicsSubmeshPartitioning_DynamicArray1D_Type physicsSubmeshPartitioning;

};

static const uint32_t checksum[] = { 0x8cf41087, 0x1ec73f2e, 0x602ad91d, 0xdbec5061, };

} // namespace ClothingGraphicalLodParameters_0p4NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class ClothingGraphicalLodParameters_0p4 : public NvParameterized::NvParameters, public ClothingGraphicalLodParameters_0p4NS::ParametersStruct
{
public:
	ClothingGraphicalLodParameters_0p4(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~ClothingGraphicalLodParameters_0p4();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ClothingGraphicalLodParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)4;

	static uint32_t staticVersion(void)
	{
		return ClassVersion;
	}

	uint32_t version(void) const
	{
		return(staticVersion());
	}

	static const uint32_t ClassAlignment = 8;

	static const uint32_t* staticChecksum(uint32_t& bits)
	{
		bits = 8 * sizeof(ClothingGraphicalLodParameters_0p4NS::checksum);
		return ClothingGraphicalLodParameters_0p4NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const ClothingGraphicalLodParameters_0p4NS::ParametersStruct& parameters(void) const
	{
		ClothingGraphicalLodParameters_0p4* tmpThis = const_cast<ClothingGraphicalLodParameters_0p4*>(this);
		return *(static_cast<ClothingGraphicalLodParameters_0p4NS::ParametersStruct*>(tmpThis));
	}

	ClothingGraphicalLodParameters_0p4NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ClothingGraphicalLodParameters_0p4NS::ParametersStruct*>(this));
	}

	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle) const;
	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NvParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NvParameterized::MutexType mBuiltFlagMutex;
};

class ClothingGraphicalLodParameters_0p4Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		ClothingGraphicalLodParameters_0p4::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ClothingGraphicalLodParameters_0p4), ClothingGraphicalLodParameters_0p4::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, ClothingGraphicalLodParameters_0p4::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingGraphicalLodParameters_0p4");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ClothingGraphicalLodParameters_0p4)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, ClothingGraphicalLodParameters_0p4)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, ClothingGraphicalLodParameters_0p4::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, ClothingGraphicalLodParameters_0p4::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingGraphicalLodParameters_0p4");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of ClothingGraphicalLodParameters_0p4 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ClothingGraphicalLodParameters_0p4*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ClothingGraphicalLodParameters_0p4::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (ClothingGraphicalLodParameters_0p4::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (ClothingGraphicalLodParameters_0p4::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (ClothingGraphicalLodParameters_0p4::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
