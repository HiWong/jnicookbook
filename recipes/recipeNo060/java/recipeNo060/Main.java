package recipeNo060;

import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;
import org.apache.logging.log4j.core.appender.ConsoleAppender;

public class Main {

  private static final Logger logger = LogManager.getLogger("Main");

  public static void displayMessage() {
    logger.info("Hello from Java");
  }
}

