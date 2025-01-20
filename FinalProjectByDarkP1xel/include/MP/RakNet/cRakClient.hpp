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
	virtual ~cRakClient(void);
	virtual auto Connect(const char *pHost, unsigned __int16 ui16ServerPort, unsigned __int16 ui16ClientPort, unsigned __int32 ui32Depreciated, __int32 i32ThreadSleepTimer) -> bool;
	virtual auto Disconnect(unsigned __int32 ui32BlockDuration, unsigned __int8 ui8OrderingChannel = 0) -> void;
	virtual auto InitializeSecurity(const char *pPrivKeyP, const char *pPrivKeyQ) -> void;
	virtual auto SetPassword(const char *pPassword) -> void;
	virtual auto HasPassword(void) const -> bool;
	virtual auto Send(const unsigned __int8 *pData, const unsigned __int32 ui32Length, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel) -> bool;
	virtual auto Send(class cBitStream *pBitStream, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel) -> bool;
	virtual auto Receive(void) -> struct stPacket *;
	virtual auto DeallocatePacket(struct stPacket *pPacket) -> void;
	virtual auto PingServer(void) -> void;
	virtual auto PingServer(const char *pHost, unsigned __int16 ui16ServerPort, unsigned __int16 ui16ClientPort, bool bOnlyReplyOnAcceptingConnections) -> void;
	virtual auto GetAveragePing(void) -> __int32;
	virtual auto GetLastPing(void) const -> __int32;
	virtual auto GetLowestPing(void) const -> __int32;
	virtual auto GetPlayerPing(const struct stPlayerID playerID) -> __int32;
	virtual auto StartOccasionalPing(void) -> void;
	virtual auto StopOccasionalPing(void) -> void;
	virtual auto IsConnected(void) const -> bool;
	virtual auto GetSynchronizedRandomInteger(void) const -> unsigned __int32;
	virtual auto GenerateCompressionLayer(unsigned __int32 ui32InputFrequencyTable[256], bool bInputLayer) -> bool;
	virtual auto DeleteCompressionLayer(bool bInputLayer) -> bool;
	virtual auto RegisterAsRemoteProcedureCall(__int32 *pUniqueID, void(__cdecl *pFunctionPointer)(struct stRPCParameters *pRPCParams)) -> void;
	virtual auto RegisterClassMemberRPC(__int32 *pUniqueID, void *pFunctionPointer) -> void;
	virtual auto UnregisterAsRemoteProcedureCall(__int32 *pUniqueID) -> void;
	virtual auto RPC(unsigned __int8 *pRPCID, const unsigned __int8 *pData, unsigned __int32 ui32BitLength, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, bool bShiftTimestamp) -> bool;
	virtual auto RPC(unsigned __int8 *pRPCID, class cBitStream *pBitStream, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, bool bShiftTimestamp) -> bool;
	virtual auto RPC_(unsigned __int8 *pRPCID, class cBitStream *pBitStream, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, bool bShiftTimestamp, struct stNetworkID networkID) -> bool;
	virtual auto SetTrackFrequencyTable(bool bUnk) -> void;
	virtual auto GetSendFrequencyTable(unsigned __int32 ui32OutputFrequencyTable[256]) -> bool;
	virtual auto GetCompressionRatio(void) const -> float;
	virtual auto GetDecompressionRatio(void) const -> float;
	virtual auto AttachPlugin(void *pMessageHandler) -> void;
	virtual auto DetachPlugin(void *pMessageHandler) -> void;
	virtual auto GetStaticServerData(void) -> class cBitStream *;
	virtual auto SetStaticServerData(const unsigned __int8 *pData, const __int32 i32Length) -> void;
	virtual auto GetStaticClientData(const struct stPlayerID playerID) -> class cBitStream *;
	virtual auto SetStaticClientData(const struct stPlayerID playerID, const unsigned __int8 *pData, const __int32 i32Length) -> void;
	virtual auto SendStaticClientDataToServer(void) -> void;
	virtual auto cRakClient::GetServerID() const -> struct stPlayerID;
	virtual auto cRakClient::GetPlayerID() const -> struct stPlayerID;
	virtual auto cRakClient::GetInternalID() const -> struct stPlayerID;
	virtual auto PlayerIDToDottedIP(const struct stPlayerID playerID) const -> const char *;
	virtual auto PushBackPacket(struct stPacket *pPacket, bool bPushAtHead) -> void;
	virtual auto SetRouterInterface(void *pRouterInterface) -> void;
	virtual auto RemoveRouterInterface(void *pRouterInterface) -> void;
	virtual auto SetTimeoutTime(unsigned __int32 ui32TimeMS) -> void;
	virtual auto SetMTUSize(unsigned __int32 ui32Size) -> bool;
	virtual auto GetMTUSize(void) const -> __int32;
	virtual auto AllowConnectionResponseIPMigration(bool bAllow) -> void;
	virtual auto AdvertiseSystem(const char *pHost, unsigned __int16 ui16RemotePort, const unsigned __int8 *pData, __int32 i32DataLength) -> void;
	virtual auto GetStatistics(void) -> const struct stRakNetStatistics *;
	virtual auto ApplyNetworkSimulator(double dMaxSendBPS, unsigned __int16 ui16MinExtraPing, unsigned __int16 ui16ExtraPingVariance) -> void;
	virtual auto IsNetworkSimulatorActive(void) -> bool;
	virtual auto GetPlayerIndex(void) -> unsigned __int16;

	private:
};

#endif