
static const value_string packettypenames[] = {
    { 0x00, "Keep Alive" },
    { 0x01, "Login" },
    { 0x02, "Handshake" },
    { 0x03, "Chat" },
    { 0x04, "Update Time" },
    { 0x05, "Inventory" },
    { 0x06, "Compass Target"},
    { 0x07, "Use Entity(?)"},
    { 0x08, "Update Health"},
    { 0x0A, "Player on ground" },
    { 0x0B, "Player Position" },
    { 0x0C, "Player Look" },
    { 0x0D, "Player Move + Look" },
    { 0x0E, "Block Dig" },
    { 0x0F, "Place" },
    /*{ 0x10, "Block/Item Switch" },*/ /* ??? */
    { 0x10, "Change slot selection" },
    { 0x11, "Add to Inventory" },
    { 0x12, "Arm Animation" },
    { 0x14, "Named Entity Spawn" },
    { 0x15, "Entity Spawn" },
    { 0x16, "Collect Item" },
    { 0x17, "Add Object or Vehicle" },
    { 0x18, "Mob Spawn" },
    { 0x19, "Painting" },
    { 0x1C, "Entity Velociy(?)"},
    { 0x1D, "Destroy Entity" },
    { 0x1E, "Entity" },
    { 0x1F, "Relative Entity Move" },
    { 0x20, "Entity Look" },
    { 0x21, "Relative Entity Move + Look" },
    { 0x22, "Entity Teleport" },
    { 0x27, "Attach Entity?" },
    { 0x28, "Entity Metadata" },
    { 0x32, "Pre-Chunk" },
    { 0x33, "Map Chunk" },
    { 0x34, "Multi Block Change" },
    { 0x35, "Block Change" },
    { 0x36, "Play Note Block" },
    { 0x3b, "Complex Entity"},
    { 0x3c, "Explosion" },
    { 0x64, "Window Close"},
    { 0x65, "Window Close"},
    { 0x67, "Set Slot"},
    { 0x68, "Window Items"},
    { 0x69, "Progress Bar"},
    { 0x6A, "Transaction"},
    { 0xFF, "Kick" },
    { 0, NULL }
};
