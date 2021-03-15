#pragma once

namespace Cool {

class Icons {
public:
	static inline GLuint Play()  { return m_playID; }
	static inline GLuint Pause() { return m_pauseID; }

	static void _LoadAll();
	static void _DestroyAll();

private:
	static GLuint m_playID;
	static GLuint m_pauseID;
};

} // namespace Cool