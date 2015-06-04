/*
 * Copyright (C) 2010, 2011 Apple Inc. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

// This all-in-one cpp file cuts down on template bloat to allow us to build our Windows release build.

#include "ActiveDOMObject.cpp"
#include "AnimationEvent.cpp"
#include "Attr.cpp"
#include "BeforeTextInsertedEvent.cpp"
#include "BeforeUnloadEvent.cpp"
#include "CDATASection.cpp"
#include "CharacterData.cpp"
#include "CheckedRadioButtons.cpp"
#include "ChildListMutationScope.cpp"
#include "ChildNodeList.cpp"
#include "ClassNodeList.cpp"
#include "ClientRect.cpp"
#include "ClientRectList.cpp"
#include "ClipboardEvent.cpp"
#include "CollectionIndexCache.cpp"
#include "Comment.cpp"
#include "CompositionEvent.cpp"
#include "ContainerNode.cpp"
#include "ContainerNodeAlgorithms.cpp"
#include "ContextDestructionObserver.cpp"
#include "CustomEvent.cpp"
#include "DOMCoreException.cpp"
#include "DOMError.cpp"
#include "DOMImplementation.cpp"
#include "DOMNamedFlowCollection.cpp"
#include "DOMStringList.cpp"
#include "DataTransfer.cpp"
#include "DatasetDOMStringMap.cpp"
#include "DecodedDataDocumentParser.cpp"
#include "DeviceMotionController.cpp"
#include "DeviceMotionData.cpp"
#include "DeviceMotionEvent.cpp"
#include "DeviceOrientationController.cpp"
#include "DeviceOrientationData.cpp"
#include "DeviceOrientationEvent.cpp"
#include "Document.cpp"
#include "DocumentEventQueue.cpp"
#include "DocumentFragment.cpp"
#include "DocumentMarker.cpp"
#include "DocumentMarkerController.cpp"
#include "DocumentOrderedMap.cpp"
#include "DocumentParser.cpp"
#include "DocumentSharedObjectPool.cpp"
#include "DocumentType.cpp"
#include "Element.cpp"
#include "EntityReference.cpp"
#include "ErrorEvent.cpp"
#include "Event.cpp"
#include "EventContext.cpp"
#include "EventDispatcher.cpp"
#include "EventException.cpp"
#include "EventListenerMap.cpp"
#include "EventNames.cpp"
#include "EventTarget.cpp"
#include "ExceptionBase.cpp"
#include "ExceptionCodePlaceholder.cpp"
#include "FocusEvent.cpp"
#include "IdTargetObserver.cpp"
#include "IdTargetObserverRegistry.cpp"
#include "InlineStyleSheetOwner.cpp"
#include "KeyboardEvent.cpp"
#include "LiveNodeList.cpp"
#include "MessageChannel.cpp"
#include "MessageEvent.cpp"
#include "MessagePort.cpp"
#include "MessagePortChannel.cpp"
#include "MouseEvent.cpp"
#include "MouseRelatedEvent.cpp"
#include "MutationEvent.cpp"
#include "MutationObserver.cpp"
#include "MutationObserverInterestGroup.cpp"
#include "MutationObserverRegistration.cpp"
#include "MutationRecord.cpp"
#include "NameNodeList.cpp"
#include "NamedFlowCollection.cpp"
#include "NodeFilter.cpp"
#include "NodeFilterCondition.cpp"
#include "NodeIterator.cpp"
#include "NodeRenderingTraversal.cpp"
#include "OverflowEvent.cpp"
#include "PageTransitionEvent.cpp"
#include "PendingScript.cpp"
#include "PopStateEvent.cpp"
#include "Position.cpp"
#include "PositionIterator.cpp"
#include "ProcessingInstruction.cpp"
#include "ProgressEvent.cpp"
#include "PseudoElement.cpp"
#include "Range.cpp"
#include "RangeException.cpp"
#include "RegisteredEventListener.cpp"
#include "ScopedEventQueue.cpp"
#include "ScriptElement.cpp"
#include "ScriptExecutionContext.cpp"
#include "ScriptRunner.cpp"
#include "ScriptableDocumentParser.cpp"
#include "SecurityContext.cpp"
#include "SecurityOriginPolicy.cpp"
#include "SelectorQuery.cpp"
#include "ShadowRoot.cpp"
#include "SpaceSplitString.cpp"
#include "StaticNodeList.cpp"
#include "StyledElement.cpp"
#include "TagNodeList.cpp"
#include "Text.cpp"
#include "TextEvent.cpp"
#include "TextNodeTraversal.cpp"
#include "Touch.cpp"
#include "TouchEvent.cpp"
#include "TouchList.cpp"
#include "TransformSourceLibxslt.cpp"
#include "TransitionEvent.cpp"
#include "Traversal.cpp"
#include "TreeScope.cpp"
#include "TreeScopeAdopter.cpp"
#include "TreeWalker.cpp"
#include "UIEvent.cpp"
#include "UIEventWithKeyState.cpp"
#include "UserActionElementSet.cpp"
#include "UserGestureIndicator.cpp"
#include "UserTypingGestureIndicator.cpp"
#include "ViewportArguments.cpp"
#include "VisitedLinkState.cpp"
#include "WebKitAnimationEvent.cpp"
#include "WebKitNamedFlow.cpp"
#include "WebKitTransitionEvent.cpp"
#include "WheelEvent.cpp"
#include "XMLDocumentParser.cpp"
#include "XMLDocumentParserScope.cpp"
