/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "Images.h"

//==============================================================================
/**
*/
class SimpleDelayAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    SimpleDelayAudioProcessorEditor (SimpleDelayAudioProcessor&, AudioProcessorValueTreeState&);
    ~SimpleDelayAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    AudioProcessorValueTreeState& valueStateTree;
    
    Slider numDelayDial;
    Label numDelayLabel;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> numDelayValue;
    
    Slider feedbackDial;
    Label feedbackLabel;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> feedbackValue;
    
    Slider roomSizeSlider;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> roomSizeAttachment;
    
    Slider roomWidthSlider;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> roomWidthAttachment;
    
    Slider dampingSlider;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> dampingAttachment;
    
    Slider dryWetSlider;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> dryWetAttachment;
    
    Image backgroundImage;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SimpleDelayAudioProcessor& processor;
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SimpleDelayAudioProcessorEditor)
};
