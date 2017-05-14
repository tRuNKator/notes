#include "types.h"

// address: 0x46019B
//
// towners_get_num_from_id returns the towner number (towners array index) of
// the given towner ID.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/towners.h#towners
//    * https://github.com/sanctuary/notes/blob/master/enums.h#towner_id
int __fastcall towners_get_num_from_id(towner_id towner_id);

// address: 0x4601C1
//
// towners_init_graphics initializes the NPC graphics for each direction.
void __fastcall towners_init_graphics(void *towner_cel, void **cel_from_direction);

// address: 0x4601FB
//
// towners_init_anim initializes the animation of the given NPC.
void __fastcall towners_init_anim(int towner_num, void *active_cel, int nframes, int nticks_per_frame);

// address: 0x46022F
//
// towners_place places the given NPC on the map.
void __fastcall towners_place(int towner_num, int frame_width, bool32_t targetable, towner_id towner_id, int col, int row, towner_anim_seq_id towner_anim_seq_id, int unused);

// address: 0x4602C4
//
// towners_init_gossip initializes quest gossip of the given NPC.
void __fastcall towners_init_gossip(int towner_num);

// address: 0x460311
//
// towners_init_griswold initializes Griswold the Blacksmith.
void towners_init_griswold();

// address: 0x4603A0
//
// towners_init_odgen initializes Ogden the Tavern owner.
void towners_init_odgen();

// address: 0x460436
//
// towners_init_wounded_townsman initializes the Wounded Townsman.
void towners_init_wounded_townsman();

// address: 0x4604C6
//
// towners_init_adria initializes Adria the Witch.
void towners_init_adria();

// address: 0x460555
//
// towners_init_gillian initializes Gillian the Barmaid.
void towners_init_gillian();

// address: 0x4605E4
//
// towners_init_wirt initializes Wirt the Peg-legged boy.
void towners_init_wirt();

// address: 0x46067A
//
// towners_init_pepin initializes Pepin the Healer.
void towners_init_pepin();

// address: 0x460709
//
// towners_init_cain initializes Cain the Elder.
void towners_init_cain();

// address: 0x460798
//
// towners_init_farnham initializes Farnham the Drunk.
void towners_init_farnham();

// address: 0x460827
//
// towners_init_cows initializes the Cow NPCs.
void towners_init_cows();

// address: 0x460976
//
// towners_init initializes the NPCs of Tristram.
void towners_init();

// address: 0x4609C3
//
// towners_cleanup releases resources used by NPCs.
void towners_cleanup();

// address: 0x460A05
//
// towners_stop_interaction stops interaction with distant players.
void __fastcall towners_stop_interaction(int towner_num);

// address: 0x460A78
//
// towners_update_logic_griswold updates the logic of Griswold each game tick;
// stops interaction with distant players.
void towners_update_logic_griswold();

// address: 0x460A86
//
// towners_update_logic_ogden updates the logic of Ogden each game tick; stops interaction with distant players.
void towners_update_logic_ogden();

// address: 0x460A95
//
// towners_update_logic_wounded_townsman updates the logic of the Wounded
// Townsman each game tick; stops interaction with distant players, and updates
// quest events.
void towners_update_logic_wounded_townsman();

// address: 0x460B0D
//
// towners_update_logic_pepin updates the logic of Pepin each game tick; stops
// interaction with distant players.
void towners_update_logic_pepin();

// address: 0x460B1C
//
// towners_update_logic_cain updates the logic of Cain each game tick; stops
// interaction with distant players.
void towners_update_logic_cain();

// address: 0x460B2B
//
// towners_update_logic_farnham updates the logic of Farnham each game tick; stops interaction with distant players.
void towners_update_logic_farnham();

// address: 0x460B3A
//
// towners_update_logic_wirt updates the logic of Wirt each game tick; stops
// interaction with distant players.
void towners_update_logic_wirt();

// address: 0x460B49
//
// towners_update_logic_adria updates the logic of Adria each game tick; stops
// interaction with distant players.
void towners_update_logic_adria();

// address: 0x460B58
//
// towners_update_logic_gillian updates the logic of Gillain each game tick;
// stops interaction with distant players.
void towners_update_logic_gillian();

// address: 0x460B67
//
// towners_update_logic_cow updates the logic of the Cows each game tick; stops interaction with distant players.
void towners_update_logic_cows();

// address: 0x460B76
//
// towners_update updates the logic and graphics of NPCs each game tick.
void towners_update();

// address: 0x460C5C
//
// TODO: add documentation.

// address: 0x460CAC
//
// towners_greeting initiates the given NPC greeting.
void __fastcall towners_greeting(speech_id speech_id);

// address: 0x460CC9
//
// TODO: add documentation.

// address: 0x4617E8
//
// TODO: add documentation.

