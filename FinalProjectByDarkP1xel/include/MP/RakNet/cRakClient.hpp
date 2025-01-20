//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPRAKCLIENT_HPP
#define MPRAKCLIENT_HPP

#pragma once

class cRakClient {
	public:
	virtual cRakClient::~cRakClient(void);
	virtual auto cRakClient::Connect(const char *pHost, unsigned __int16 ui16ServerPort, unsigned __int16 ui16ClientPort, unsigned __int32 ui32Depreciated, __int32 i32ThreadSleepTimer) -> bool;
	virtual auto cRakClient::Disconnect(unsigned __int32 ui32BlockDuration, unsigned __int8 ui8OrderingChannel = 0) -> void;
	virtual auto cRakClient::InitializeSecurity(const char *pPrivKeyP, const char *pPrivKeyQ) -> void;
	virtual auto cRakClient::SetPassword(const char *pPassword) -> void;
	virtual auto cRakClient::HasPassword(void) const -> bool;
	virtual auto cRakClient::Send(const unsigned __int8 *pData, const unsigned __int32 ui32Length, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel) -> bool;
	virtual auto cRakClient::Send(class cBitStream *pBitStream, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel) -> bool;
	virtual auto cRakClient::Receive(void) -> struct stPacket *;
	virtual auto cRakClient::DeallocatePacket(struct stPacket *pPacket) -> void;
	virtual auto cRakClient::PingServer(void) -> void;
	virtual auto cRakClient::PingServer(const char *pHost, unsigned __int16 ui16ServerPort, unsigned __int16 ui16ClientPort, bool bOnlyReplyOnAcceptingConnections) -> void;
	virtual auto cRakClient::GetAveragePing(void) -> __int32;
	virtual auto cRakClient::GetLastPing(void) const -> __int32;
	virtual auto cRakClient::GetLowestPing(void) const -> __int32;
	virtual auto cRakClient::GetPlayerPing(const struct stPlayerID playerID) -> __int32;
	virtual auto cRakClient::StartOccasionalPing(void) -> void;
	virtual auto cRakClient::StopOccasionalPing(void) -> void;
	virtual auto cRakClient::IsConnected(void) const -> bool;
	virtual auto cRakClient::GetSynchronizedRandomInteger(void) const -> unsigned __int32;
	virtual auto cRakClient::GenerateCompressionLayer(unsigned __int32 ui32InputFrequencyTable[256], bool bInputLayer) -> bool;
	virtual auto cRakClient::DeleteCompressionLayer(bool bInputLayer) -> bool;
	virtual auto cRakClient::RegisterAsRemoteProcedureCall(__int32 *pUniqueID, void(__cdecl *pFunctionPointer)(struct stRPCParameters *pRPCParams)) -> void;
	virtual auto cRakClient::RegisterClassMemberRPC(__int32 *pUniqueID, void *pFunctionPointer) -> void;
	virtual auto cRakClient::UnregisterAsRemoteProcedureCall(__int32 *pUniqueID) -> void;
	virtual auto cRakClient::RPC(unsigned __int8 *pRPCID, const unsigned __int8 *pData, unsigned __int32 ui32BitLength, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, bool bShiftTimestamp) -> bool;
	virtual auto cRakClient::RPC(unsigned __int8 *pRPCID, class cBitStream *pBitStream, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, bool bShiftTimestamp) -> bool;
	virtual auto cRakClient::RPC_(unsigned __int8 *pRPCID, class cBitStream *pBitStream, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, bool bShiftTimestamp, struct stNetworkID networkID) -> bool;
	virtual auto cRakClient::SetTrackFrequencyTable(bool bUnk) -> void;
	virtual auto cRakClient::GetSendFrequencyTable(unsigned __int32 ui32OutputFrequencyTable[256]) -> bool;
	virtual auto cRakClient::GetCompressionRatio(void) const -> float;
	virtual auto cRakClient::GetDecompressionRatio(void) const -> float;
	virtual auto cRakClient::AttachPlugin(void *pMessageHandler) -> void;
	virtual auto cRakClient::DetachPlugin(void *pMessageHandler) -> void;
	virtual auto cRakClient::GetStaticServerData(void) -> class cBitStream *;
	virtual auto cRakClient::SetStaticServerData(const unsigned __int8 *pData, const __int32 i32Length) -> void;
	virtual auto cRakClient::GetStaticClientData(const struct stPlayerID playerID) -> class cBitStream *;
	virtual auto cRakClient::SetStaticClientData(const struct stPlayerID playerID, const unsigned __int8 *pData, const __int32 i32Length) -> void;
	virtual auto cRakClient::SendStaticClientDataToServer(void) -> void;
	virtual auto cRakClient::GetServerID() const -> struct stPlayerID;
	virtual auto cRakClient::GetPlayerID() const -> struct stPlayerID;
	virtual auto cRakClient::GetInternalID() const -> struct stPlayerID;
	virtual auto cRakClient::PlayerIDToDottedIP(const struct stPlayerID playerID) const -> const char *;
	virtual auto cRakClient::PushBackPacket(struct stPacket *pPacket, bool bPushAtHead) -> void;
	virtual auto cRakClient::SetRouterInterface(void *pRouterInterface) -> void;
	virtual auto cRakClient::RemoveRouterInterface(void *pRouterInterface) -> void;
	virtual auto cRakClient::SetTimeoutTime(unsigned __int32 ui32TimeMS) -> void;
	virtual auto cRakClient::SetMTUSize(unsigned __int32 ui32Size) -> bool;
	virtual auto cRakClient::GetMTUSize(void) const -> __int32;
	virtual auto cRakClient::AllowConnectionResponseIPMigration(bool bAllow) -> void;
	virtual auto cRakClient::AdvertiseSystem(const char *pHost, unsigned __int16 ui16RemotePort, const unsigned __int8 *pData, __int32 i32DataLength) -> void;
	virtual auto cRakClient::GetStatistics(void) -> const struct stRakNetStatistics *;
	virtual auto cRakClient::ApplyNetworkSimulator(double dMaxSendBPS, unsigned __int16 ui16MinExtraPing, unsigned __int16 ui16ExtraPingVariance) -> void;
	virtual auto cRakClient::IsNetworkSimulatorActive(void) -> bool;
	virtual auto cRakClient::GetPlayerIndex(void) -> unsigned __int16;

	private:
};

#endif