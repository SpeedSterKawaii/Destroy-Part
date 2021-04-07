int DestroyPart(DWORD rL)
{
	r_lua_getglobal(RL, "game");
	r_lua_getfield(RL, -1, "Workspace");
	r_lua_getfield(RL, -1, "PartName");
	r_lua_getfield(RL, -1, "Destroy");
	r_lua_pushvalue(RL, -2);
	r_lua_pcall(RL, 1, 1, 0);
	r_lua_getglobal(RL, "warn");
	r_lua_pushstring(RL, "Destroyed Part from Workspace.");
	r_lua_pcall(RL, 1, 1, 0);
	return 1;
}

// Took me 20-30 minutes to make this, works for imperious / calamari
