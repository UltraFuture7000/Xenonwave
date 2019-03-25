#ifndef _DISCORDRPCWRAPPER_HPP_
#define _DISCORDRPCWRAPPER_HPP_

#include "discord_rpc.h"
#include <cstring>
#include <stdio.h>

#ifdef USE_DISCORD_RPC

class DiscordRPCInstance {
public:
	inline void init() {
		DiscordEventHandlers handlers;
		memset(&handlers, 0, sizeof(handlers));


		// Discord_Initialize(const char* applicationId, DiscordEventHandlers* handlers, int autoRegister, const char* optionalSteamId, int pipe)
		Discord_Initialize(, &handlers, 1, 0);


		char buffer[256];
		DiscordRichPresence discordPresence;
		memset(&discordPresence, 0, sizeof(discordPresence));
		discordPresence.state = "- Listen To Your Heart";
		discordPresence.details = "Currently listening to Roxette ";
		discordPresence.startTimestamp = time(0);
		discordPresence.endTimestamp = time(0) + 300;
		sprintf(buffer, "Test | Mode: %d", 4);

		Discord_UpdatePresence(&discordPresence);
	}
};
#endif

#endif